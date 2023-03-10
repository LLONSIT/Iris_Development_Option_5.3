#ident	"@(#)curses:screen/curses.ed	1.58"
/*	Copyright (c) 1990, 1991 UNIX System Laboratories, Inc.	*/
/*	Copyright (c) 1988 AT&T	*/
/*	  All Rights Reserved  	*/

/*	THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF     	*/
/*	UNIX System Laboratories, Inc.                     	*/
/*	The copyright notice above does not evidence any   	*/
/*	actual or intended publication of such source code.	*/


/*
 * curses.h - this file is automatically made from caps and
 *	curses.ed. Don't make changes directly to curses.h!
 */
#ifdef BSDCURSES
/*
** Use BSD curses library and header instead of AT&T curses header and library
** compatibility mode.  Note that the BSD curses header and library may be
** optionally installed so may not exist on system.
*/
#include <cursesBSD.h>
#else /* BSDCURSES */

#ifndef CURSES_H

#define CURSES_H	/* define prevents multiple includes */

#ifndef _WCHAR_T
#define _WCHAR_T
typedef long	wchar_t;
#endif

#define	CSMAX	4

#include  <stdio.h>

  /*
   * This trick is used to distinguish between SYSV and V7 systems.
   * We assume that L_ctermid is only defined in stdio.h in SYSV
   * systems, but not in V7 or Berkeley UNIX.
   */
#ifdef L_ctermid
# define SYSV
#endif
   /* Some V7 systems define L_ctermid - we list those here */
#ifdef BSD
# undef SYSV
#endif

#ifdef SYSV
# ifndef VINTR
#  ifdef _ABI_SOURCE
#  include <termios.h>
#  else /* ! _ABI_SOURCE */
#  include <termio.h>
#  endif /* _ABI_SOURCE */
# endif /* VINTR */
#  ifdef _ABI_SOURCE
    typedef struct termios SGTTY;
#  else /* ! _ABI_SOURCE */
    typedef struct termio SGTTY;
#  endif /* _ABI_SOURCE */
#else /* !SYSV */
# ifndef _SGTTYB_
#  include <sgtty.h>
# endif /* _SGTTYB_ */
    typedef struct sgttyb SGTTY;
/*
 * Here we attempt to improve portability by providing some #defines
 * for SYSV functions on non-SYSV systems.
 */

# define memcpy(dst, src, len)	bcopy((src), (dst), (len))
# define strchr			index
# define strrchr		rindex
#endif /* SYSV */

typedef	char bool;

#define _VR3_COMPAT_CODE
/*
 * chtype is the type used to store a character together with attributes.
 * It can be set to "char" to save space, or "long" to get more attributes.
 */
#ifdef	CHTYPE
	typedef	CHTYPE chtype;
#else
	typedef unsigned long chtype;
#endif /* CHTYPE */

/*
	Define for the 'old' definition of chtype is required
	when we are running in compatibility mode
*/
#ifdef _VR3_COMPAT_CODE
typedef unsigned short _ochtype;
#endif

/* TRUE and FALSE get defined so many times, */
/* let's not get in the way of other definitions. */
#if	!defined(TRUE) || ((TRUE) != 1)
#define	TRUE	(1)
#endif
#if	!defined(FALSE) || ((FALSE) != 0)
#define	FALSE	(0)
#endif
#if	!defined(ERR) || ((ERR) != -1)
#define	ERR	(-1)
#endif
#if	!defined(OK) || ((OK) != 0)
#define	OK	(0)
#endif

/* short-hand notations */
typedef struct _win_st	WINDOW;
typedef struct screen	SCREEN;
typedef struct _Mouse	MOUSE_STATUS;

struct _win_st
{
	short		_cury, _curx;	/* current coordinates */
	short		_maxy, _maxx;	/* max coordinates */
	short		_begy, _begx;	/* (0,0) screen coordinates */
	char		_flags;
	short		_yoffset;	/* actual begy is _begy+_yoffset */
	bool		_clear,		/* clearok() info */
			_leave,		/* leaveok() info */
			_immed,		/* window in immediate mode */
			_sync;		/* auto syncup of parent */
	WINDOW		*_padwin;	/* "pad" area for current window */
#ifdef	_VR3_COMPAT_CODE
	_ochtype	**_y16;		/* MUST stay at this offset in WINDOW */
#endif
	short		*_firstch;	/* first change in line */
	short		*_lastch;	/* last change in line */
	short		_tmarg, _bmarg;	/* scrolling region bounds */
					/* MUST stay at this offset in WINDOW */
	unsigned	_scroll		: 1;	/* scrollok() info */
	unsigned	_use_idl	: 1;	
	unsigned	_use_keypad	: 1;
	unsigned	_notimeout	: 1;
	unsigned	_use_idc	: 1;	
	chtype		_attrs;		/* current window attributes */
	chtype		_bkgd;		/* background, normally blank */
	int		_delay;		/* delay period on wgetch
					 * 0:  for nodelay
					 * <0: for infinite delay
					 * >0: delay time in units of millisec
					 */
	short		_ndescs;	/* number of descendants */
	short		_parx, _pary;	/* coords relative to parent (0,0) */
	WINDOW		*_parent;	/* the parent if this is a subwin */
	chtype		**_y;			/* lines of data */
	short		_nbyte;		/* number of bytes to come */
	short		_index;		/* index to store coming char */
	char		_waitc[CSMAX];	/* array to store partial m-width char*/
	bool		_insmode;	/* TRUE for inserting, */
					/* FALSE for adding */
};

/* _lastch is initially set to this, _firstch is set to win->_maxx */
#define	_NOCHANGE	-1
#define _INFINITY	16000	/* no line can be longer than this */

/* values for win->_flags */
#define	_ISPAD		001
#define	_WINCHANGED	002
#define	_WINMOVED	004
#define	_WINSDEL	010
#define	_CANT_BE_IMMED	020
#define	_WIN_ADD_ONE	040
#define	_WIN_INS_ONE	100

struct _Mouse {
	int x, y;
	short button[3];
	int   changes;
};

#define CURS_STUPID	0
#define CURS_UNKNOWN	1
#define CURS_BAD_MALLOC	2

/*
 * Various tricks to shut up lint about things that are perfectly fine.
 */
#if	defined(lint) && !defined(CURSES) /* if not internal to curses source */
 struct screen {
	 int _nobody_;
 };
#endif /* lint */

/* common external variables */

extern	int	LINES, COLS, TABSIZE, COLORS, COLOR_PAIRS;

extern	short	curs_errno;

extern	WINDOW	*stdscr, *curscr;

extern  MOUSE_STATUS	Mouse_status;

extern	char	ttytype[];

extern char	curs_parm_err[],
		*curs_err_strings[];

/* Function declarations */

#ifdef	_VR3_COMPAT_CODE

extern	_ochtype	*acs_map;
extern	chtype		*acs32map;

/* definitions for Vr3 source compatibility */

#define initscr		initscr32
#define newterm		newterm32
#define waddch		w32addch
#define wechochar	w32echochar
#define pechochar	p32echochar
#define winsch		w32insch
#define vidputs		vid32puts
#define vidattr		vid32attr
#define wattroff	w32attroff
#define wattron		w32attron
#define wattrset	w32attrset
#define acs_map		acs32map
#define box		box32

#ifdef	__STDC__
extern	WINDOW	*initscr();
extern	SCREEN	*newterm(char *, FILE *, FILE *);
#else
extern	WINDOW	*initscr();
extern	SCREEN	*newterm();
#endif

/* declarations for mini-curses */

#ifdef	__STDC__
extern	WINDOW	*m_initscr(void);

extern	SCREEN	*m_newterm(char *, FILE *, FILE *);

extern	int	m_addch(int), m_addstr(char *), m_clear(void), m_erase(void),
		m_move(int, int), m_refresh(void);

#else  /* __STDC__ */
extern	WINDOW	*m_initscr();

extern	SCREEN	*m_newterm();

extern	int	m_addch(), m_addstr(), m_clear(), m_erase(),
		m_move(), m_refresh();

#endif /* __STDC__ */

#else	/* _VR3_COMPAT_CODE */

extern	chtype	*acs_map;

#endif	/* _VR3_COMPAT_CODE */

#ifdef __STDC__

extern	SCREEN	*newscreen(char *, int, int, int, FILE *, FILE *),
		*setcurscreen(SCREEN *);

extern	WINDOW	*initscr(void),
		*newwin(int, int, int, int),
		*newpad(int, int),
		*derwin(WINDOW *, int, int, int, int),
		*dupwin(WINDOW *),
		*getwin(FILE *);

extern	int	wgetch(WINDOW *); /* it can return KEY_*, for instance. */

extern	char	*longname(void),	/* long name of terminal */
		*termname(void),	/* effective terminal name */
		*keyname(int), 	/* name of token returned by wgetch() */
		*slk_label(int),
		erasechar(void),
		killchar(void),
		*unctrl(int);

extern	chtype	termattrs(void);

extern	void	vidupdate(chtype, chtype, int (*)(int)),
		wsyncup(WINDOW *), wsyncdown(WINDOW *),
		delscreen(SCREEN *), curserr(void),
		_setqiflush(int), 
		wcursyncup(WINDOW *);

extern	int	cbreak(void), nocbreak(void), 
		reset_prog_mode(void), reset_shell_mode(void),
		def_prog_mode(void), _setecho(int), _setnonl(int),
		def_shell_mode(void), raw(void),
		savetty(void), traceon(void), _meta(int), 
		traceoff(void), noraw(void), flushinp(void),
		_getsyx(int *, int *),
		_ring(int), resetty(void),
		ripoffline(int, int (*)(WINDOW *, int)),
		setsyx(int, int), slk_refresh(void),
		slk_restore(void), 
		wstandend(WINDOW *), wstandout(WINDOW *),
		wattroff(WINDOW *, chtype), wattron(WINDOW *, chtype),
		wattrset(WINDOW *, chtype),
		wrefresh(WINDOW *);

extern	int	copywin(WINDOW *, WINDOW *, int, int, int, int, int, int, int),
		curs_set(int), delay_output(int), delwin(WINDOW *),
		doupdate(void), drainio(int), endwin(void), isendwin(void),
		baudrate(void), has_ic(void), has_il(void),
		keypad(WINDOW *, int),
		mvcur(int, int, int, int);

extern	int	mvprintw(int, int, ...), mvscanw(int, int, ...),
		mvwprintw(WINDOW *, int, int, ...),
		mvwscanw(WINDOW *, int, int, ...),
		printw(char *, ...), scanw(char *, ...),
		wprintw(WINDOW *, ...), wscanw(WINDOW *, ...);

		/* in the following 2 functions 'char *' is really va_list */
		/* however, we cannot include <stdarg.h> in curses.h,      */
		/* because some applications may be using <varargs.h> that */
		/* conflicts with <stdarg.h>				   */

extern  int	vwprintw(WINDOW *, char *, char *),
		vwscanw(WINDOW *, char *, char *);

extern	int	mvwin(WINDOW *, int, int), mvderwin(WINDOW *, int, int),
		napms(int), newkey(char *, int, int),
		filter(void), _overlay (WINDOW *, WINDOW *, int),
		pechochar(WINDOW *, chtype),
		pnoutrefresh(WINDOW *, int, int, int, int, int, int),
		prefresh(WINDOW *, int, int, int, int, int, int);

extern 	int	putwin(WINDOW *, FILE *), wredrawln(WINDOW *, int, int),
		scr_dump(char *), setupterm(char *, int, int *);

extern	int	slk_attron(chtype), slk_attroff(chtype), slk_attrset(chtype),
		slk_clear(void), slk_noutrefresh(void),
		slk_set(int, char *, int),
		slk_start(int, int *), slk_touch(void), start_color(void),
		typeahead(int);

extern	bool	can_change_color(void), has_colors(void);
		
extern int	waddch(WINDOW *, chtype),
		waddchnstr(WINDOW *, chtype *, int),
		waddnstr(WINDOW *, char *, int),
		wbkgd(WINDOW *, chtype),
		wborder(WINDOW *, chtype, chtype, chtype, chtype,
				  chtype, chtype, chtype, chtype),
		wclrtobot(WINDOW *), wclrtoeol(WINDOW *), 
		wdelch(WINDOW *), wechochar(WINDOW *, chtype),
		wgetstr(WINDOW *, char *),
		wgetnstr(WINDOW *, char *, int),
		whline(WINDOW *, chtype, int),
		wvline(WINDOW *, chtype, int),
		winchnstr(WINDOW *, chtype *, int),
		winchstr(WINDOW *, chtype *),
		winnstr(WINDOW *, char *, int),
		winsch(WINDOW *, chtype),
		winsdelln(WINDOW *, int),		/* internal */
		winsnstr(WINDOW *, char *, int),
		winstr(WINDOW *, char *),
		wmove(WINDOW *, int, int),
		wnoutrefresh(WINDOW *),
		wredrawln(WINDOW *, int, int),
		wscrl(WINDOW *, int),
		wsetscrreg(WINDOW *, int, int),
		wtouchln(WINDOW *, int, int, int);

extern	int	crmode(void), nocrmode(void), ungetch(int);

extern	int	mouse_set(long int), mouse_on(long int),
		mouse_off(long int), request_mouse_pos(void),
		map_button(unsigned long);

extern	void	wmouse_position (WINDOW *, int *, int *);

extern unsigned long getmouse(void), getbmap(void);
		
		/* the following declarations take integers as arguments */
		/* to keep the CI5 compiler happy.  what we really want  */
		/* to pass is given in comments.  (by the way, we don't  */
		/* save anything by passing short or bool, since compiler*/
		/* expands them to integers any way			 */

extern	int	pair_content(int /*short*/, short *, short *),
		color_content(int /*short*/, short *, short *, short *),
		init_color(int, int, int, int /*all 4 ints */),
		init_pair(int, int, int /*all 3 ints */),
		idlok(WINDOW *, int /*bool*/);

extern	void	immedok(WINDOW *, int /*bool*/); 

extern chtype	winwch(WINDOW *);

extern int	pechowchar(WINDOW *, chtype), ungetwch(int),
		waddnwstr(WINDOW *, wchar_t *, int),
		waddwch(WINDOW *, chtype),
		waddwchnstr(WINDOW *, chtype *, int),
		wechowchar(WINDOW *, chtype),
		wgetnwstr(WINDOW *, wchar_t *, int),
		wgetwch(WINDOW *),
		wgetwstr(WINDOW *, wchar_t *),
		winnwstr(WINDOW *, wchar_t *, int),
		winsnwstr(WINDOW *, wchar_t *, int),
		winswch(WINDOW *, chtype),
		winwchnstr(WINDOW *, chtype *, int),
		winwstr(WINDOW *, wchar_t *);

#else /* __STDC__ */

extern	SCREEN	*newscreen(/*termname,lines,cols,tabsiz,fout,fin*/),
		*setcurscreen(/*screenptr*/);

extern	WINDOW	*initscr(),
		*newwin(/*nlines,ncols,begy,begx*/),
		*newpad(/*nlines,ncols*/),
		*derwin(/*orig,nlines,ncols,begy,begx*/),
		*dupwin(/*orig*/),
		*getwin(/*file*/);

extern	int	wgetch(); /* because it can return KEY_*, for instance. */

extern	char	*longname(),	/* long name of terminal */
		*termname(),	/* effective terminal name */
		*keyname(/*int*/), /* name of token returned by wgetch() */
		*slk_label(/*index*/),
		erasechar(),
		killchar(),
		*unctrl();

extern	chtype	termattrs();

extern	void	vidupdate(), wsyncup(), wsyncdown(),
		delkeymap(), 
		delscreen(), curserr(),
		_setqiflush(), 
		immedok(), 
		wcursyncup();

extern	int	cbreak(), nocbreak(), 
		reset_prog_mode(), reset_shell_mode(), def_prog_mode(),
		_setecho(), _setnonl(),
		def_shell_mode(), raw(),
		savetty(), traceon(), _meta(), 
		traceoff(), noraw(), flushinp(), _getsyx(),
		_ring(), resetty(), ripoffline(), setsyx(), slk_refresh(),
		slk_restore(), wstandend(), wstandout(),
		wattroff(), wattron(), wattrset(), wrefresh();

extern	int	color_cont(), copywin(), curs_set(), delay_output(), delwin(),
		doupdate(), drainio(), endwin(), isendwin(),
		baudrate(), has_ic(), has_il(), idlok(), 
		init_color(), init_pair(), keypad(), mvcur();

extern	int	mvprintw(), mvscanw(), mvwprintw(), mvwscanw(),
		printw(), scanw(), wprintw(), wscanw(), vwprintw(), vwscanw();

extern	int	mvwin(), mvderwin(), napms(), newkey(), filter(), _overlay(),
		pair_content(), pechochar(), pnoutrefresh(), prefresh();

extern 	int	putwin(), wredrawln(), scr_dump(), setupterm();

extern	int	slk_attrof(), slk_attrof(), slk_attrset(),
		slk_clear(), slk_noutrefresh(), slk_set(),
		slk_start(), slk_touch(), start_color(),
		typeahead();

extern	bool	can_change_color(), has_colors();
		
extern	int	waddch(), waddchnstr(), waddnstr(), wbkgd(),
		wborder(), wclrtobot(), wclrtoeol(), wdelch(), wechochar(),
		wgetstr(), wgetnstr(), whline(), wvline(), winchnstr(),
		winchstr(), winnstr(), winsch(),
		winsdelln(),		/*internal */
		winsnstr(), winstr(), wmove(), wnoutrefresh(), wredrawln(),
		wscrl(), wsetscrreg(), wtouchln();

extern	int	crmode(), nocrmode(), ungetch();

extern	int	mouse_set(), mouse_on(), mouse_off(),
		request_mouse_pos(), map_button();
		
extern void	wmouse_position();

extern unsigned long getmouse(), getbmap();

extern chtype	winwch();

extern int	pechowchar(), ungetwch(), waddnwstr(), waddwch(),
		waddwchnstr(), wechowchar(), wgetnwstr(), wgetwch(),
		wgetwstr(), winnwstr(), winsnwstr(), winswch(),
		winwchnstr(), winwstr();

#endif /* __STDC__ */

#define getsyx(y,x)		_getsyx(&(y),&(x))

/* 
 * Functions to get at the window structure.
 */

#define getyx(win,y,x)		((y) = getcury(win), (x) = getcurx(win))
#define	getbegyx(win,y,x)	((y) = getbegy(win), (x) = getbegx(win))
#define	getmaxyx(win,y,x)	((y) = getmaxy(win), (x) = getmaxx(win))
#define	getparyx(win,y,x)	((y) = getpary(win), (x) = getparx(win))

#if	defined(CURS_PERFORMANCE) && !defined(lint)
#define getcury(win)		((win)->_cury)
#define getcurx(win)		((win)->_curx)
#define	getbegy(win)		((win)->_begy)
#define	getbegx(win)		((win)->_begx)
#define	getmaxy(win)		((win)->_maxy)
#define	getmaxx(win)		((win)->_maxx)
#define	getpary(win)		((win)->_pary)
#define	getparx(win)		((win)->_parx)
#define getbkgd(win)		((win)->_bkgd)
#define getattrs(win)		((win)->_attrs)
#else 	/* defined(CURS_PERFORMANCE) && !defined(lint) */

#ifdef __STDC__
extern	int	getcury(WINDOW *), getcurx(WINDOW *),
		getbegy(WINDOW *), getbegx(WINDOW *),
		getmaxy(WINDOW *), getmaxx(WINDOW *),
		getpary(WINDOW *), getparx(WINDOW *);

extern chtype	getbkgd(WINDOW *), getattrs(WINDOW *);

#else  /* __STDC__ */
extern	int	getcury(), getcurx(), getbegy(), getbegx(),
		getmaxy(), getmaxx(), getpary(), getparx();

extern chtype	getbkgd(), getattrs();

#endif  /* __STDC__ */
#endif	/* defined(CURS_PERFORMANCE) && !defined(lint) */

#if	defined(NOMACROS) || defined(lint)

#ifdef __STDC__

extern	SCREEN	*newterm(char *, FILE *, FILE *),
		*set_term(SCREEN *);

extern	WINDOW	*subpad(WINDOW *, int, int, int, int),
		*subwin(WINDOW *, int, int, int, int);

extern	char	*unctrl(int);

extern	chtype	inch(void), winch(WINDOW *), mvinch(int, int),
		mvwinch(WINDOW *, int, int);

extern int	addch(chtype), addchnstr(chtype *, int), addchstr(chtype *),
		addnstr(char *, int), addstr(char *),
		attroff(chtype), attron(chtype), attrset(chtype),
		beep(void), bkgd(chtype),
		border(chtype, chtype, chtype, chtype,
		       chtype, chtype, chtype, chtype),
		box(WINDOW *, chtype, chtype),
		clear(void), clearok(WINDOW *, int /*bool*/),
		clrtobot(void), clrtoeol(void),
		crmode(void), delch(void), deleteln(void),
		echo(void), echochar(chtype), erase(void),
/* MORE */	fixterm(void),
		flash(void), garbagedlines(WINDOW *, int, int),
		garbagedwin(WINDOW *),
		getch(void), getstr(char *), gettmode(void),
		halfdelay(int), hline(chtype, int),
		inchnstr(chtype *, int), inchstr(chtype *),
		innstr(char *, int), insch(chtype),
		insdelln(int), insertln(void), insnstr(char *, int),
		insstr(char *), instr(char *), intrflush(WINDOW *, int),
		is_linetouched(WINDOW *, int), is_wintouched(WINDOW *),
		leaveok(WINDOW *, int /*bool*/), meta(WINDOW *, int),
		move(int, int), mvaddch(int, int, chtype),
		mvaddchnstr(int, int, chtype *, int),
		mvaddchstr(int, int, chtype *),
		mvaddnstr(int, int, char *, int),
		mvaddstr(int, int, char *),
		mvdelch(int, int),
		mvgetch(int, int),
		mvgetstr(int, int, char *),
		mvhline(int, int, chtype, int),
		mvinchnstr(int, int, chtype *, int),
		mvinchstr(int, int, chtype *),
		mvinnstr(int, int, char *, int),
		mvinsch(int, int, chtype),
		mvinsnstr(int, int, char *, int),
		mvinsstr(int, int, char *),
		mvinstr(int, int, char *),
		mvvline(int, int, chtype, int),
		mvwaddch(WINDOW *, int, int, chtype),
		mvwaddchnstr(WINDOW *, int, int, chtype *, int),
		mvwaddchstr(WINDOW *, int, int, chtype *),
		mvwaddnstr(WINDOW *, int, int, char *, int),
		mvwaddstr(WINDOW *, int, int, char *),
		mvwdelch(WINDOW *, int, int),
		mvwgetch(WINDOW *, int, int),
		mvwgetstr(WINDOW *, int, int, char *),
		mvwhline(WINDOW *, int, int, chtype, int),
		mvwinchnstr(WINDOW *, int, int, chtype *, int),
		mvwinchstr(WINDOW *, int, int,chtype *),
		mvwinnstr(WINDOW *, int, int, char *, int),
		mvwinsch(WINDOW *, int, int, chtype),
		mvwinsnstr(WINDOW *, int, int, char *, int),
		mvwinsstr(WINDOW *, int, int, char *),
		mvwinstr(WINDOW *, int, int, char *),
		mvwvline(WINDOW *, int, int, chtype, int),
		nl(void), nocrmode(void), nodelay(WINDOW *, int /*bool*/),
		noecho(void), nonl(void), notimeout(WINDOW *, int /*bool*/),
		overlay(WINDOW *, WINDOW *), overwrite(WINDOW *, WINDOW *),
		redrawwin(WINDOW *), refresh(void),
		resetterm(void), saveterm(void), scr_init(char *),
		scr_restore(char *), scr_set(char *), scrl(int),
		scroll(WINDOW *), scrollok(WINDOW *, int /*bool*/),
		setscrreg(int, int), setterm(char *),
		slk_init(int), standend(void), standout(void),
		syncok(WINDOW *, int /*bool*/),
		touchline(WINDOW *, int, int), touchwin(WINDOW *),
		untouchwin(WINDOW *), vline(chtype, int),
		waddchstr(WINDOW *, chtype *), waddstr(WINDOW *, char *),
		wclear(WINDOW *),
		wdeleteln(WINDOW *), werase(WINDOW *),
		winchstr(WINDOW *, chtype *), winsertln(WINDOW *),
		winsstr(WINDOW *, char *), winstr(WINDOW *, char *),
		wstandend(WINDOW *), wstandout(WINDOW *);

extern	void	bkgdset(chtype), idcok(WINDOW *, int /*bool*/),
		noqiflush(void),
		wbkgdset(WINDOW *, chtype),
		qiflush(void), timeout(int), wtimeout(WINDOW *, int),
		use_env(int /*char*/);

extern chtype	inwch(void),
		mvinwch(int, int),
		mvwinwch(WINDOW *, int, int);

extern int	addnwstr(wchar_t *, int),
		addwch(chtype),
		addwchnstr(chtype *, int),
		addwchstr(chtype *),
		addwstr(wchar_t *),
		echowchar(chtype),
		getnwstr(wchar_t *, int),
		getwch(void),
		getwstr(wchar_t *),
		innwstr(wchar_t *, int),
		insnwstr(wchar_t *, int),
		inswch(chtype),
		inswstr(wchar_t *),
		inwchnstr(chtype *, int),
		inwchstr(chtype *),
		inwstr(wchar_t *),
		mvaddnwstr(int, int, wchar_t *, int),
		mvaddwch(int, int, chtype),
		mvaddwchnstr(int, int, chtype *, int),
		mvaddwchstr(int, int, chtype *),
		mvaddwstr(int, int, wchar_t *),
		mvgetnwstr(int, int, wchar_t *, int),
		mvgetwch(int, int),
		mvgetwstr(int, int, wchar_t *),
		mvinnwstr(int, int, wchar_t *, int),
		mvinsnwstr(int, int, wchar_t *, int),
		mvinswch(int, int, chtype),
		mvinswstr(int, int, wchar_t *),
		mvinwchnstr(int, int, chtype *, int),
		mvinwchstr(int, int, chtype *),
		mvinwstr(int, int, wchar_t *),
		mvwaddnwstr(WINDOW *, int, int, wchar_t *, int),
		mvwaddwch(WINDOW *, int, int, chtype),
		mvwaddwchnstr(WINDOW *, int, int, chtype *, int),
		mvwaddwchstr(WINDOW *, int, int, chtype *),
		mvwaddwstr(WINDOW *, int, int, wchar_t *),
		mvwgetnwstr(WINDOW *, int, int, wchar_t *, int),
		mvwgetwch(WINDOW *, int, int),
		mvwgetwstr(WINDOW *, int, int, wchar_t *),
		mvwinnwstr(WINDOW *, int, int, wchar_t *, int),
		mvwinsnwstr(WINDOW *, int, int, wchar_t *, int),
		mvwinswch(WINDOW *, int, int, chtype),
		mvwinswstr(WINDOW *, int, int, wchar_t *),
		mvwinwchnstr(WINDOW *, int, int, chtype *, int),
		mvwinwchstr(WINDOW *, int, int,chtype *),
		mvwinwstr(WINDOW *, int, int, wchar_t *),
		waddwchstr(WINDOW *, chtype *),
		waddwstr(WINDOW *, wchar_t *),
		winswstr(WINDOW *, wchar_t *),
		winwchstr(WINDOW *, chtype *);

#else /* __STDC__ */

extern	SCREEN	*newterm(/*termname,fout,fin*/),
		*set_term(/*screenptr*/);

extern	WINDOW	*subpad(),
		*subwin();

extern	chtype	inch(), winch(), mvinch(), mvwinch();

extern	char	*unctrl();

extern int	addch(), addchnstr(), addchstr(), addnstr(), addstr(),
		attroff(), attron(), attrset(), beep(), bkgd(),
		border(), box(), clear(), clearok(), clrtobot(), clrtoeol(),
		crmode(), delch(), deleteln(), echo(), echochar(),
		erase(),
/* MORE */	fixterm(),
		flash(), garbagedlines(), garbagedwin(),
		getch(), getstr(), gettmode(), halfdelay(), hline(),
		inchnstr(), inchstr(), innstr(), insch(),
		insdelln(), insertln(), insnstr(), insstr(), instr(),
		intrflush(),
		is_linetouched(), is_wintouched(), leaveok(), meta(),
		move(), mvaddch(), mvaddchnstr(), mvaddchstr(), mvaddnstr(),
		mvaddstr(), mvdelch(), mvgetch(), mvgetstr(), mvhline(),
		mvinchnstr(), mvinchstr(), mvinnstr(), mvinsch(), mvinsnstr(),
		mvinsstr(), mvinstr(), mvvline(), mvwaddch(), mvwaddchnstr(),
		mvwaddchstr(), mvwaddnstr(), mvwaddstr(), mvwdelch(),
		mvwgetch(), mvwgetstr(), mvwhline(), mvwinchnstr(),
		mvwinchstr(), mvwinnstr(), mvwinsch(), mvwinsnstr(),
		mvwinsstr(), mvwinstr(), mvwvline(),
		nl(), nocrmode(), nodelay(),
		noecho(), nonl(), notimeout(),
		overlay(), overwrite(), redrawwin(), refresh(),
		resetterm(), saveterm(), scr_init(),
		scr_restore(), scr_set(), scrl(),
		scroll(), scrollok(), setscrreg(), setterm(),
		slk_init(), standend(), standout(), 
		syncok(), touchline(), touchwin(), untouchwin(), vline(),
		waddchstr(), waddstr(), wclear(),
		wdeleteln(), werase(), winchstr(), winsertln(),
		winsstr(), winstr(), wstandend(), wstandout();

extern	void	bkgdset(), wbkgdset(), idcok(), noqiflush(),
		qiflush(), timeout(), wtimeout(), use_env();

extern unsigned long getmouse(), getbmap();

extern chtype	inwch(), mvinwch(), mvwinwch();

extern int	addnwstr(), addwch(), addwchnstr(), addwchstr(),
		addwstr(), echowchar(), getnwstr(), getwch(),
		getwstr(), innwstr(), insnwstr(), inswch(),
		inswstr(), inwchnstr(), inwchstr(), inwstr(),
		mvaddnwstr(), mvaddwch(), mvaddwchnstr(), mvaddwchstr(),
		mvaddwstr(), mvgetnwstr(), mvgetwch(), mvgetwstr(),
		mvinnwstr(), mvinsnwstr(), mvinswch(), mvinswstr(),
		mvinwchnstr(), mvinwchstr(), mvinwstr(), mvwaddnwstr(),
		mvwaddwch(), mvwaddwchnstr(), mvwaddwchstr(), mvwaddwstr(),
		mvwgetnwstr(), mvwgetwch(), mvwgetwstr(), mvwinnwstr(),
		mvwinsnwstr(), mvwinswch(), mvwinswstr(), mvwinwchnstr(),
		mvwinwchstr(), mvwinwstr(), waddwchstr(), waddwstr(),
		winswstr(), winwchstr();

#endif /* __STDC__ */

#else	/* NOMACROS || lint */

/*
 * The defines from here down to the #endif for NOMACROS
 * define macros, which may be more efficient than their
 * function versions. The functions may be accessed by defining
 * NOMACROS in C code. This is useful for debugging purposes.
 */

#include  <unctrl.h>

/* pseudo functions for stdscr */
#define	addch(ch)	waddch(stdscr, ch)
#define	addnstr(s,n)	waddnstr(stdscr,s,n)
#define	addstr(str)	waddstr(stdscr, str)
#define	attroff(at)	wattroff(stdscr,at)
#define	attron(at)	wattron(stdscr,at)
#define	attrset(at)	wattrset(stdscr,at)
#define	bkgd(c)		wbkgd(stdscr,c)
#define	border(ls, rs, ts, bs, tl, tr, bl, br)	wborder(stdscr, ls, rs, ts, bs, tl, tr, bl, br)	
#define	clear()		wclear(stdscr)
#define	clrtobot()	wclrtobot(stdscr)
#define	clrtoeol()	wclrtoeol(stdscr)
#define	delch()		wdelch(stdscr)
#define	deleteln()	wdeleteln(stdscr)
#define	echochar(ch)	wechochar(stdscr, ch)
#define	erase()		werase(stdscr)
#define	getch()		wgetch(stdscr)
#define	getstr(str)	wgetstr(stdscr, str)
#define	inch()		winch(stdscr)
#define	insch(c)	winsch(stdscr,c)
#define	insdelln(id)	winsdelln(stdscr,id)
#define	insertln()	winsertln(stdscr)
#define	insnstr(s,n)	winsnstr(stdscr,s,n)
#define	insstr(s)	winsstr(stdscr,s)
#define	move(y, x)	wmove(stdscr, y, x)
#define	refresh()	wrefresh(stdscr)
#define	scrl(n)		wscrl(stdscr,n)
#define	setscrreg(t,b)	wsetscrreg(stdscr, t, b)
#define	standend()	wstandend(stdscr)
#define	standout()	wstandout(stdscr)
#define	timeout(tm)	wtimeout(stdscr,tm)
#define	hline(c,num)	whline(stdscr,c,num)
#define	vline(c,num)	wvline(stdscr,c,num)
#define	addchstr(str)	waddchstr(stdscr,str)
#define	addchnstr(str,n)	waddchnstr(stdscr,str,n)
#define	instr(str)	winstr(stdscr,(str))
#define	innstr(str,n)	winnstr(stdscr,(str),(n))
#define	inchstr(str)	winchstr(stdscr,str)
#define	inchnstr(str,n)	winchnstr(stdscr,str,n)
#define	bkgdset(c)	wbkgdset(stdscr,c)

#define	addnwstr(ws,n)	waddnwstr(stdscr,ws,n)
#define	addwch(ch)	waddwch(stdscr,ch)
#define	addwchnstr(str,n)	waddwchnstr(stdscr,str,n)
#define	addwchstr(str)	waddwchstr(stdscr,str)
#define	addwstr(ws)	waddwstr(stdscr,ws)
#define	echowchar(ch)	wechowchar(stdscr,ch)
#define	getnwstr(ws,n)	wgetnwstr(stdscr,ws,n)
#define	getwch()	wgetwch(stdscr)
#define	getwstr(ws)	wgetwstr(stdscr, ws)
#define	innwstr(ws,n)	winnwstr(stdscr,ws,n)
#define	insnwstr(ws,n)	winsnwstr(stdscr,ws,n)
#define	inswch(c)	winswch(stdscr,c)
#define	inswstr(ws)	winswstr(stdscr,ws)
#define	inwch()		winwch(stdscr)
#define	inwchnstr(str,n)	winwchnstr(stdscr,str,n)
#define	inwchstr(str)	winwchstr(stdscr,str)
#define	inwstr(ws)	winwstr(stdscr,ws)

/* functions to define environment flags of a window */
#ifdef	CURS_PERFORMANCE
#define	wbkgdset(win,c)		(((win)->_attrs = (((win)->_attrs & ~((win)->_bkgd & A_ATTRIBUTES)) | (c & A_ATTRIBUTES))), ((win)->_bkgd = (c)))
#define syncok(win,bf)		((win)->_parent?(win)->_sync=(bf):ERR)
#define	notimeout(win,bf)	(((win)->_notimeout = ((bf) ? TRUE : FALSE)),OK)
#define	clearok(win,bf)		(((win)->_clear = (bf)), OK)
#define	leaveok(win,bf)		(((win)->_leave = (bf)), OK)
#define	scrollok(win,bf)	(((win)->_scroll = ((bf) ? TRUE : FALSE)), OK)
#define	idcok(win,bf)		((win)->_use_idc = ((bf) ? TRUE : FALSE))
#define	nodelay(win,bf)		(((win)->_delay = (bf) ? 0 : -1), OK)
#define is_wintouched(win)	((win)->_flags & _WINCHANGED)
#define is_linetouched(win,line)	((((line) >= (win)->_maxy) || \
				     ((line) < 0)) ? ERR : \
				    (((win)->_firstch[(line)] == _INFINITY) ? \
								  FALSE : TRUE))

#define subwin(win,nl,nc,by,bx)	derwin((win),(nl),(nc),(by-win->_begy),(bx-win->_begx))
#define touchwin(win)		wtouchln((win),0,(win)->_maxy,TRUE)
#define redrawwin(win)		wredrawln((win),0,(win)->_maxy)
#define	winchstr(win,str)	winchnstr((win),str,((win)->_maxx - (win)->_curx))
#define	winstr(win,str)		winnstr((win),str,((win)->_maxx - (win)->_curx))
#define untouchwin(win)		wtouchln((win),0,((win)->_maxy),FALSE)
#define	winch(win)		((win)->_y[(win)->_cury][(win)->_curx])

#define wtimeout(win,tm)	((win)->_delay = (tm))
#define use_env(bf)		(_use_env = (bf))

#else	/* CURS_PERFORMANCE */

#ifdef __STDC__

extern	void	wbkgdset(WINDOW *, chtype),
		idcok(WINDOW *, int /*bool*/),
		wtimeout(WINDOW *, int), use_env(int /*char*/);

extern	int	syncok(WINDOW *, int /*bool*/),
		notimeout(WINDOW *, int /*bool*/),
		clearok(WINDOW *, int /*bool*/),
		leaveok(WINDOW *, int /*bool*/),
		scrollok(WINDOW *, int /*bool*/),
		nodelay(WINDOW *, int /*bool*/),
		is_linetouched(WINDOW *, int), is_wintouched(WINDOW *),
		touchwin(WINDOW *), redrawwin(WINDOW *), 
		winchstr(WINDOW *, chtype *), winstr(WINDOW *, char *),
		untouchwin(WINDOW *); 

extern  chtype  winch(WINDOW *);

extern	WINDOW	*subwin(WINDOW *, int, int, int, int);

#else  /* __STDC__ */

extern	void	wbkgdset(), idcok(), wtimeout(), use_env();

extern	int	syncok(), notimeout(), clearok(), leaveok(),
		scrollok(), nodelay(), is_linetouched(), is_wintouched(),
		touchwin(), redrawwin(), winchstr(), winstr(),
		untouchwin(); 

extern  chtype  winch();

extern	WINDOW	*subwin();

#endif /* __STDC__ */

#endif	/* CURS_PERFORMANCE */

/* functions for move and update */
#define	mvaddch(y,x,ch)		mvwaddch(stdscr,y,x,ch)
#define	mvaddnstr(y,x,s,n)	mvwaddnstr(stdscr,y,x,s,n)
#define	mvaddstr(y,x,str)	mvwaddstr(stdscr,y,x,str)
#define	mvdelch(y,x)		mvwdelch(stdscr,y,x)
#define	mvgetch(y,x)		mvwgetch(stdscr,y,x)
#define	mvgetstr(y,x,str)	mvwgetstr(stdscr,y,x,str)
#define	mvinch(y,x)		mvwinch(stdscr,y,x)
#define	mvinsch(y,x,c)		mvwinsch(stdscr,y,x,c)
#define	mvinsnstr(y,x,s,n)	mvwinsnstr(stdscr,y,x,s,n)
#define	mvinsstr(y,x,s)		mvwinsstr(stdscr,y,x,s)
#define	mvaddchstr(y,x,str)	mvwaddchstr(stdscr,y,x,str)
#define	mvaddchnstr(y,x,str,n)	mvwaddchnstr(stdscr,y,x,str,n)
#define	mvinstr(y,x,str)	mvwinstr(stdscr,y,x,(str))
#define	mvinnstr(y,x,str,n)	mvwinnstr(stdscr,y,x,(str),(n))
#define	mvinchstr(y,x,str)	mvwinchstr(stdscr,y,x,str)
#define	mvinchnstr(y,x,str,n)	mvwinchnstr(stdscr,y,x,str,n)
#define	mvhline(y,x,c,num)	mvwhline(stdscr,y,x,c,num)
#define	mvvline(y,x,c,num)	mvwvline(stdscr,y,x,c,num)

#define	mvaddnwstr(y,x,ws,n)	mvwaddnwstr(stdscr,y,x,ws,n)
#define	mvaddwch(y,x,ch)	mvwaddwch(stdscr,y,x,ch)
#define	mvaddwchnstr(y,x,str,n)	mvwaddwchnstr(stdscr,y,x,str,n)
#define	mvaddwchstr(y,x,str)	mvwaddwchstr(stdscr,y,x,str)
#define	mvaddwstr(y,x,ws)	mvwaddwstr(stdscr,y,x,ws)
#define	mvgetnwstr(y,x,ws,n)	mvwgetnwstr(stdscr,y,x,ws,n)
#define	mvgetwch(y,x)		mvwgetwch(stdscr,y,x)
#define	mvgetwstr(y,x,ws)	mvwgetwstr(stdscr,y,x,ws)
#define	mvinnwstr(y,x,ws,n)	mvwinnwstr(stdscr,y,x,ws,n)
#define	mvinsnwstr(y,x,ws,n)	mvwinsnwstr(stdscr,y,x,ws,n)
#define	mvinswch(y,x,c)		mvwinswch(stdscr,y,x,c)
#define	mvinswstr(y,x,ws)	mvwinswstr(stdscr,y,x,ws)
#define	mvinwch(y,x)		mvwinwch(stdscr,y,x)
#define	mvinwchnstr(y,x,str,n)	mvwinwchnstr(stdscr,y,x,str,n)
#define	mvinwchstr(y,x,str)	mvwinwchstr(stdscr,y,x,str)
#define	mvinwstr(y,x,ws)	mvwinwstr(stdscr,y,x,ws)

#define	mvwaddch(win,y,x,ch)	(wmove(win,y,x)==ERR?ERR:waddch(win,ch))
#define	mvwaddnstr(win,y,x,s,n)	(wmove(win,y,x)==ERR?ERR:waddnstr(win,s,n))
#define	mvwaddstr(win,y,x,str)	(wmove(win,y,x)==ERR?ERR:waddstr(win,str))
#define	mvwdelch(win,y,x)	(wmove(win,y,x)==ERR?ERR:wdelch(win))
#define	mvwgetch(win,y,x)	(wmove(win,y,x)==ERR?ERR:wgetch(win))
#define	mvwgetstr(win,y,x,str)	(wmove(win,y,x)==ERR?ERR:wgetstr(win,str))
#define	mvwinch(win,y,x)	(wmove(win,y,x)==ERR?(chtype) ERR:winch(win))
#define	mvwinsch(win,y,x,c)	(wmove(win,y,x)==ERR?ERR:winsch(win,c))
#define	mvwinsnstr(win,y,x,s,n)	(wmove(win,y,x)==ERR?ERR:winsnstr(win,s,n))
#define	mvwinsstr(win,y,x,s)	(wmove(win,y,x)==ERR?ERR:winsstr(win,s))
#define	mvwhline(win,y,x,c,num)	(wmove(win,y,x)==ERR?ERR:whline(win,c,num))
#define	mvwvline(win,y,x,c,num)	(wmove(win,y,x)==ERR?ERR:wvline(win,c,num))
#define	mvwaddchstr(win,y,x,str)	(wmove(win,y,x)==ERR?ERR:waddchstr(win,str))
#define	mvwaddchnstr(win,y,x,str,n)	(wmove(win,y,x)==ERR?ERR:waddchnstr(win,str,n))
#define	mvwinstr(win,y,x,str)	(wmove(win,y,x)==ERR?ERR:winstr(win,str))
#define	mvwinnstr(win,y,x,str,n)	(wmove(win,y,x)==ERR?ERR:winnstr(win,str,n))
#define	mvwinchstr(win,y,x,str)	(wmove(win,y,x)==ERR?ERR:winchstr(win,str))
#define	mvwinchnstr(win,y,x,str,n)	(wmove(win,y,x)==ERR?ERR:winchnstr(win,str,n))

#define	mvwaddnwstr(win,y,x,ws,n) (wmove(win,y,x)==ERR?ERR:waddnwstr(win,ws,n))
#define	mvwaddwch(win,y,x,ch)	(wmove(win,y,x)==ERR?ERR:waddwch(win,ch))
#define	mvwaddwchnstr(win,y,x,str,n) (wmove(win,y,x)==ERR?ERR:waddwchnstr(win,str,n))
#define	mvwaddwchstr(win,y,x,str) (wmove(win,y,x)==ERR?ERR:waddwchstr(win,str))
#define	mvwaddwstr(win,y,x,ws)	(wmove(win,y,x)==ERR?ERR:waddwstr(win,ws))
#define	mvwgetnwstr(win,y,x,ws,n) (wmove(win,y,x)==ERR?ERR:wgetnwstr(win,ws,n))
#define	mvwgetwch(win,y,x)	(wmove(win,y,x)==ERR?ERR:wgetwch(win))
#define	mvwgetwstr(win,y,x,ws)	(wmove(win,y,x)==ERR?ERR:wgetwstr(win,ws))
#define	mvwinnwstr(win,y,x,ws,n) (wmove(win,y,x)==ERR?ERR:winnwstr(win,ws,n))
#define	mvwinsnwstr(win,y,x,ws,n) (wmove(win,y,x)==ERR?ERR:winsnwstr(win,ws,n))
#define	mvwinswch(win,y,x,c)	(wmove(win,y,x)==ERR?ERR:winswch(win,c))
#define	mvwinswstr(win,y,x,ws)	(wmove(win,y,x)==ERR?ERR:winswstr(win,ws))
#define	mvwinwch(win,y,x)	(wmove(win,y,x)==ERR?(chtype)ERR:winwch(win))
#define	mvwinwchnstr(win,y,x,str,n) (wmove(win,y,x)==ERR?ERR:winwchnstr(win,str,n))
#define	mvwinwchstr(win,y,x,str) (wmove(win,y,x)==ERR?ERR:winwchstr(win,str))
#define	mvwinwstr(win,y,x,ws)	(wmove(win,y,x)==ERR?ERR:winwstr(win,ws))

#define	waddwchstr(win,str)	waddwchnstr(win,str,-1)
#define	winwchstr(win,str)	winwchnstr(win,str,-1)
#define waddwstr(win,ws)	waddnwstr(win,ws,-1)
#define winswstr(win,ws)	winsnwstr(win,ws,-1)

#ifdef CURS_MACROS
#define overlay(src,dst)	_overlap((src),(dst),TRUE)
#define overwrite(src,dst)	_overlap((src),(dst),FALSE)
#define wdeleteln(win)		winsdelln((win),-1)
#define winsertln(win)		winsdelln((win),1)
#define wstandend(win)		wattrset((win),A_NORMAL)
#define wstandout(win)		wattron((win),A_STANDOUT)
#define beep()			_ring(TRUE)
#define flash()			_ring(FALSE)
#define scroll(win)		wscrl((win),1)
#define slk_init(f)		slk_start(((f == 0) ? 3 : 2),NULL)
#define	scr_init(file)		_scr_all(file,0)
#define	scr_restore(file)	_scr_all(file,1)
#define	scr_set(file)		_scr_all(file,2)
#define subpad(win,nl,nc,by,bx)	derwin((win),(nl),(nc),(by),(bx))
#define box(win,v,h)		wborder((win),(v),(v),(h),(h),0,0,0,0)
#define newterm(type,fout,fin)	newscreen((type),0,0,0,(fout),(fin))
#define touchline(win,y,n)	wtouchln((win),(y),(n),TRUE)

#define waddstr(win,str)	waddnstr((win),(str),-1)
#define werase(win)		(wmove((win),0,0), wclrtobot(win))
#define wclear(win)		(clearok((win),TRUE), werase(win))
#define intrflush(win,flag)	_setqiflush(flag)
#define meta(win,flag)		_meta(flag)

#define setterm(name)		setupterm((name),1,(char*)NULL)
#define gettmode()		(OK)
#define halfdelay(tens)		ttimeout((tens)*100)

#define echo()			_setecho(TRUE)
#define noecho()		_setecho(FALSE)
#define nl()			_setnonl(FALSE)
#define nonl()			_setnonl(TRUE)

#else /* CURS_MACROS */

#ifdef __STDC__

extern	int	overlay(WINDOW *, WINDOW *), overwrite(WINDOW *, WINDOW *),
		wdeleteln(WINDOW *), winsertln(WINDOW *),
		wstandend(WINDOW *), wstandout(WINDOW *),
		beep(void), flash(void), scroll(WINDOW *), slk_init(int),
		scr_init(char *), scr_restore(char *), scr_set(char *),
		box(WINDOW *, chtype, chtype), touchline(WINDOW *, int, int),
		waddstr(WINDOW *, char *), werase(WINDOW *),
		wclear(WINDOW *), intrflush(WINDOW *, int),
		meta(WINDOW *, int), setterm(char *), gettmode(void),
		halfdelay(int), echo(void), noecho(void), nl(void), nonl(void);

extern	WINDOW *subpad(WINDOW *, int, int, int, int);

extern  SCREEN  *newterm(char *, FILE *, FILE *);

#else  /* __STDC__ */

extern	int	overlay(), overwrite(), wdeleteln(), winsertln(),
		wstandend(), wstandout(), beep(), flash(),
		scroll(), slk_init(), scr_init(), scr_restore(), scr_set(),
		box(), touchline(), waddstr(), werase(),
		wclear(), intrflush(), meta(), setterm(), gettmode(),
		halfdelay(), echo(), noecho(), nl(), nonl();

extern	WINDOW *subpad();

extern  SCREEN  *newterm();

#endif /* __STDC__ */
#endif /* CURS_MACROS */

#define garbagedlines		wredrawln
#define garbagedwin		redrawwin

#define crmode			cbreak
#define nocrmode		nocbreak
#define saveterm		def_prog_mode
#define fixterm			reset_prog_mode
#define resetterm		reset_shell_mode

#define	waddchstr(win,str)	waddchnstr((win),(str),-1)
#define winsstr(win,str)	winsnstr((win),(str),-1)

/* iocontrol functions */
#define qiflush()		_setqiflush(TRUE)
#define noqiflush()		_setqiflush(FALSE)

#define set_term		setcurscreen

#endif	/* NOMACROS || lint */

/*
 * Standard alternate character set.  The current ACS world is evolving,
 * so we support only a widely available subset: the line drawing characters
 * from the VT100, plus a few from the Teletype 5410v1.  Eventually there
 * may be support of more sophisticated ACS line drawing, such as that
 * in the Teletype 5410, the HP line drawing set, and the like.  There may
 * be support for some non line oriented characters as well.
 *
 * Line drawing ACS names are of the form ACS_trbl, where t is the top, r
 * is the right, b is the bottom, and l is the left.  t, r, b, and l might
 * be B (blank), S (single), D (double), or T (thick).  The subset defined
 * here only uses B and S.
 */

#define ACS_BSSB	(acs_map['l'])
#define ACS_SSBB	(acs_map['m'])
#define ACS_BBSS	(acs_map['k'])
#define ACS_SBBS	(acs_map['j'])
#define ACS_SBSS	(acs_map['u'])
#define ACS_SSSB	(acs_map['t'])
#define ACS_SSBS	(acs_map['v'])
#define ACS_BSSS	(acs_map['w'])
#define ACS_BSBS	(acs_map['q'])
#define ACS_SBSB	(acs_map['x'])
#define ACS_SSSS	(acs_map['n'])

/*
 * Human readable names for the most commonly used characters.
 * "Upper", "right", etc. are chosen to be consistent with the vt100 manual.
 */

#define ACS_ULCORNER	ACS_BSSB
#define ACS_LLCORNER	ACS_SSBB
#define ACS_URCORNER	ACS_BBSS
#define ACS_LRCORNER	ACS_SBBS
#define ACS_RTEE	ACS_SBSS
#define ACS_LTEE	ACS_SSSB
#define ACS_BTEE	ACS_SSBS
#define ACS_TTEE	ACS_BSSS
#define ACS_HLINE	ACS_BSBS
#define ACS_VLINE	ACS_SBSB
#define ACS_PLUS	ACS_SSSS
#define ACS_S1		(acs_map['o'])	/* scan line 1 */
#define ACS_S9		(acs_map['s'])	/* scan line 9 */
#define ACS_DIAMOND	(acs_map['`'])	/* diamond */
#define ACS_CKBOARD	(acs_map['a'])	/* checker board (stipple) */
#define ACS_DEGREE	(acs_map['f'])	/* degree symbol */
#define ACS_PLMINUS	(acs_map['g'])	/* plus/minus */
#define ACS_BULLET	(acs_map['~'])	/* bullet */
	/* Teletype 5410v1 symbols */
#define ACS_LARROW	(acs_map[','])	/* arrow pointing left */
#define ACS_RARROW	(acs_map['+'])	/* arrow pointing right */
#define ACS_DARROW	(acs_map['.'])	/* arrow pointing down */
#define ACS_UARROW	(acs_map['-'])	/* arrow pointing up */
#define ACS_BOARD	(acs_map['h'])	/* board of squares */
#define ACS_LANTERN	(acs_map['i'])	/* lantern symbol */
#define ACS_BLOCK	(acs_map['0'])	/* solid square block */

/* Funny "characters" enabled for various special function keys for input */
/* This list is created from caps and curses.ed. Do not edit it! */
#define KEY_MIN		0401		/* Minimum curses key */
#define KEY_BREAK	0401		/* break key (unreliable) */
#define KEY_DOWN	0402		/* Sent by terminal down arrow key */
#define KEY_UP		0403		/* Sent by terminal up arrow key */
#define KEY_LEFT	0404		/* Sent by terminal left arrow key */
#define KEY_RIGHT	0405		/* Sent by terminal right arrow key */
#define KEY_HOME	0406		/* Sent by home key. */
#define KEY_BACKSPACE	0407		/* Sent by backspace key */
#define KEY_F0		0410		/* function key f0. */
#define KEY_F(n)	(KEY_F0+(n))	/* Space for 64 function keys is reserved. */
#define KEY_DL		0510		/* Sent by delete line key. */
#define KEY_IL		0511		/* Sent by insert line. */
#define KEY_DC		0512		/* Sent by delete character key. */
#define KEY_IC		0513		/* Sent by ins char/enter ins mode key. */
#define KEY_EIC		0514		/* Sent by rmir or smir in insert mode. */
#define KEY_CLEAR	0515		/* Sent by clear screen or erase key. */
#define KEY_EOS		0516		/* Sent by clear-to-end-of-screen key. */
#define KEY_EOL		0517		/* Sent by clear-to-end-of-line key. */
#define KEY_SF		0520		/* Sent by scroll-forward/down key */
#define KEY_SR		0521		/* Sent by scroll-backward/up key */
#define KEY_NPAGE	0522		/* Sent by next-page key */
#define KEY_PPAGE	0523		/* Sent by previous-page key */
#define KEY_STAB	0524		/* Sent by set-tab key */
#define KEY_CTAB	0525		/* Sent by clear-tab key */
#define KEY_CATAB	0526		/* Sent by clear-all-tabs key. */
#define KEY_ENTER	0527		/* Enter/send (unreliable) */
#define KEY_SRESET	0530		/* soft (partial) reset (unreliable) */
#define KEY_RESET	0531		/* reset or hard reset (unreliable) */
#define KEY_PRINT	0532		/* print or copy */
#define KEY_LL		0533		/* Sent by home-down key */
					/* The keypad is arranged like this: */
					/*    a1    up    a3   */
					/*   left   b2  right  */
					/*    c1   down   c3   */
#define KEY_A1		0534		/* Upper left of keypad */
#define KEY_A3		0535		/* Upper right of keypad */
#define KEY_B2		0536		/* Center of keypad */
#define KEY_C1		0537		/* Lower left of keypad */
#define KEY_C3		0540		/* Lower right of keypad */
#define KEY_BTAB	0541		/* Back tab key */
#define KEY_BEG		0542		/* beg(inning) key */
#define KEY_CANCEL	0543		/* cancel key */
#define KEY_CLOSE	0544		/* close key */
#define KEY_COMMAND	0545		/* cmd (command) key */
#define KEY_COPY	0546		/* copy key */
#define KEY_CREATE	0547		/* create key */
#define KEY_END		0550		/* end key */
#define KEY_EXIT	0551		/* exit key */
#define KEY_FIND	0552		/* find key */
#define KEY_HELP	0553		/* help key */
#define KEY_MARK	0554		/* mark key */
#define KEY_MESSAGE	0555		/* message key */
#define KEY_MOVE	0556		/* move key */
#define KEY_NEXT	0557		/* next object key */
#define KEY_OPEN	0560		/* open key */
#define KEY_OPTIONS	0561		/* options key */
#define KEY_PREVIOUS	0562		/* previous object key */
#define KEY_REDO	0563		/* redo key */
#define KEY_REFERENCE	0564		/* ref(erence) key */
#define KEY_REFRESH	0565		/* refresh key */
#define KEY_REPLACE	0566		/* replace key */
#define KEY_RESTART	0567		/* restart key */
#define KEY_RESUME	0570		/* resume key */
#define KEY_SAVE	0571		/* save key */
#define KEY_SBEG	0572		/* shifted beginning key */
#define KEY_SCANCEL	0573		/* shifted cancel key */
#define KEY_SCOMMAND	0574		/* shifted command key */
#define KEY_SCOPY	0575		/* shifted copy key */
#define KEY_SCREATE	0576		/* shifted create key */
#define KEY_SDC		0577		/* shifted delete char key */
#define KEY_SDL		0600		/* shifted delete line key */
#define KEY_SELECT	0601		/* select key */
#define KEY_SEND	0602		/* shifted end key */
#define KEY_SEOL	0603		/* shifted clear line key */
#define KEY_SEXIT	0604		/* shifted exit key */
#define KEY_SFIND	0605		/* shifted find key */
#define KEY_SHELP	0606		/* shifted help key */
#define KEY_SHOME	0607		/* shifted home key */
#define KEY_SIC		0610		/* shifted input key */
#define KEY_SLEFT	0611		/* shifted left arrow key */
#define KEY_SMESSAGE	0612		/* shifted message key */
#define KEY_SMOVE	0613		/* shifted move key */
#define KEY_SNEXT	0614		/* shifted next key */
#define KEY_SOPTIONS	0615		/* shifted options key */
#define KEY_SPREVIOUS	0616		/* shifted prev key */
#define KEY_SPRINT	0617		/* shifted print key */
#define KEY_SREDO	0620		/* shifted redo key */
#define KEY_SREPLACE	0621		/* shifted replace key */
#define KEY_SRIGHT	0622		/* shifted right arrow */
#define KEY_SRSUME	0623		/* shifted resume key */
#define KEY_SSAVE	0624		/* shifted save key */
#define KEY_SSUSPEND	0625		/* shifted suspend key */
#define KEY_SUNDO	0626		/* shifted undo key */
#define KEY_SUSPEND	0627		/* suspend key */
#define KEY_UNDO	0630		/* undo key */
#define KEY_MOUSE	0631		/* Mouse event has occured */
#define KEY_MAX		0777		/* Maximum curses key */

/*
	The definition for 'reg' is not standard, and is provided for
	compatibility reasons. User's are discouraged from using this.
*/
#define	reg	register

/* Various video attributes */
#define A_STANDOUT	000000200000L
#define	_STANDOUT	A_STANDOUT    /* for compatability with old curses */
#define A_UNDERLINE	000000400000L
#define A_REVERSE	000001000000L
#define A_BLINK		000002000000L
#define A_DIM		000004000000L
#define A_BOLD		000010000000L
#define A_ALTCHARSET	000100000000L

/* The next two are subject to change so don't depend on them */
#define A_INVIS		000020000000L
#define A_PROTECT	000040000000L

#define A_NORMAL	000000000000L
#define A_ATTRIBUTES	037777600000L	/* 0xFFFF0000 */
#define A_CHARTEXT	000000177777L	/* 0x0000FFFF */
#define A_COLOR		017600000000L

#define COLOR_PAIR(n)	((n) << 25)
#define PAIR_NUMBER(n)	(((n) & A_COLOR) >> 25)

/* definition of 8 basic color	*/
#define COLOR_BLACK	0
#define COLOR_RED	1
#define COLOR_GREEN	2
#define COLOR_YELLOW	3
#define COLOR_BLUE	4
#define COLOR_MAGENTA	5
#define COLOR_CYAN	6
#define COLOR_WHITE	7

/* mouse related macros: don't change these definitions or bit-masks. */
/* they are interdependent (used by _map_button() in tgetch()	      */
#define BUTTON_RELEASED            0
#define BUTTON_PRESSED             1
#define BUTTON_CLICKED             2
#define BUTTON_DOUBLE_CLICKED      3
#define BUTTON_TRIPLE_CLICKED      4

#define MOUSE_X_POS                (Mouse_status.x)
#define MOUSE_Y_POS                (Mouse_status.y)
#define A_BUTTON_CHANGED           (Mouse_status.changes & 7)
#define MOUSE_MOVED                (Mouse_status.changes & 8)
#define MOUSE_POS_REPORT	   (Mouse_status.changes & 16)
#define BUTTON_CHANGED(x)          (Mouse_status.changes & (1 << ((x) - 1)))
#define BUTTON_STATUS(x)           (Mouse_status.button[(x)-1])

/* definition of mouse bit-masks	*/
#define	BUTTON1_RELEASED	000000000001L
#define	BUTTON1_PRESSED		000000000002L
#define	BUTTON1_CLICKED		000000000004L
#define	BUTTON1_DOUBLE_CLICKED	000000000010L
#define	BUTTON1_TRIPLE_CLICKED	000000000020L
#define	BUTTON2_RELEASED	000000000040L
#define	BUTTON2_PRESSED		000000000100L
#define	BUTTON2_CLICKED		000000000200L
#define	BUTTON2_DOUBLE_CLICKED	000000000400L
#define	BUTTON2_TRIPLE_CLICKED	000000001000L
#define	BUTTON3_RELEASED	000000002000L
#define	BUTTON3_PRESSED		000000004000L
#define	BUTTON3_CLICKED		000000010000L
#define	BUTTON3_DOUBLE_CLICKED	000000020000L
#define	BUTTON3_TRIPLE_CLICKED	000000040000L
#define ALL_MOUSE_EVENTS	000000077777L
#define REPORT_MOUSE_POSITION	000000100000L

#endif /* CURSES_H */
#endif /* BSDCURSES */
