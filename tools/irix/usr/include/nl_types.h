#ifndef __NL_TYPES_H__
#define __NL_TYPES_H__
#ifdef __cplusplus
extern "C" {
#endif
#ident "$Revision: 1.6 $"
/*
*
* Copyright 1992, Silicon Graphics, Inc.
* All Rights Reserved.
*
* This is UNPUBLISHED PROPRIETARY SOURCE CODE of Silicon Graphics, Inc.;
* the contents of this file may not be disclosed to third parties, copied or
* duplicated in any form, in whole or in part, without the prior written
* permission of Silicon Graphics, Inc.
*
* RESTRICTED RIGHTS LEGEND:
* Use, duplication or disclosure by the Government is subject to restrictions
* as set forth in subdivision (c)(1)(ii) of the Rights in Technical Data
* and Computer Software clause at DFARS 252.227-7013, and/or in similar or
* successor clauses in the FAR, DOD or NASA FAR Supplement. Unpublished -
* rights reserved under the Copyright Laws of the United States.
*/
/*	Copyright (c) 1990, 1991 UNIX System Laboratories, Inc.	*/
/*	Copyright (c) 1988 AT&T	*/
/*	  All Rights Reserved  	*/

/*	THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF     	*/
/*	UNIX System Laboratories, Inc.                     	*/
/*	The copyright notice above does not evidence any   	*/
/*	actual or intended publication of such source code.	*/


/*
 * allow for limits.h
 */
#ifndef NL_SETMAX
#define NL_SETMAX	1024
#define NL_MSGMAX	32767
#define NL_TEXTMAX	1024
#endif

#define NL_MAXPATHLEN	1024
#define NL_PATH		"NLSPATH"
#define NL_LANG		"LANG"
#define NL_DEF_LANG	"english"
#define NL_SETD		1
#define NL_MAX_OPENED	10


/*
 * gencat internal structures
 */
struct cat_msg {
  int msg_nr;			/* The message number */
  int msg_len;			/* The actual message len */
  long msg_off;			/* The message offset in the temporary file */
  char *msg_ptr;		/* A pointer to the actual message */
  struct cat_msg *msg_next;     /* Next element in list */
};

struct cat_set {
  int set_nr;			/* The set number */
  int set_msg_nr;		/* The number of messages in the set */
  struct cat_msg *set_msg;	/* The associated message list */
  struct cat_set *set_next;	/* Next set in list */
};



/*
 * mkmsgs format set
 * information
 */
struct m_cat_set {
  int first_msg;		/* The first message number */
  int last_msg;			/* The last message in the set */
};

/*
 * structure in file
 */
struct set_info {
	int no_sets;
	struct m_cat_set sn[1];
};

#define CMD_SET		"set"
#define CMD_SET_LEN	3
#define CMD_DELSET	"delset"
#define CMD_DELSET_LEN	6
#define CMD_QUOTE	"quote"
#define CMD_QUOTE_LEN	5

#define XOPEN_DIRECTORY "/usr/lib/locale/Xopen/LC_MESSAGES"
#define DFLT_MSG	"\01"   
#define M_EXTENSION	".m"
/*
 * Default search pathname
 */
#define DEF_NLSPATH	"/usr/lib/locale/%L/Xopen/LC_MESSAGES/%N"

struct cat_hdr {
  long hdr_magic;		/* The magic number */
  int hdr_set_nr;		/* Set nr in file */
  int hdr_mem;			/* The space needed to load the file */
  long hdr_off_msg_hdr;		/* Position of messages headers in file */
  long hdr_off_msg;		/* Position of messages in file */
};

struct cat_set_hdr {
  int shdr_set_nr;		/* The set number */
  int shdr_msg_nr;		/* Number of messages in set */
  int shdr_msg;			/* Start offset of messages in messages list */
};

struct cat_msg_hdr{
  int msg_nr;			/* The messge number */
  int msg_len;			/* message len */
  int msg_ptr;			/* message offset in table */
};

#define CAT_MAGIC	0xFF88FF89

typedef int nl_item ;

typedef struct {
  char type;
  int set_nr;
  union {
    struct malloc_data {
      struct cat_set_hdr *sets;
      struct cat_msg_hdr *msgs;
      char *data;
    } m;
    struct gettxt_data {
      struct set_info *sets;
      char *msgs;
      int msg_size;
      int set_size;
    } g;
 } info;
} nl_catd_t;

typedef nl_catd_t *nl_catd;

/*
 * type fields for nl_catd_t
 */
#define MKMSGS		'M'	/* mkmsgs interfaces */
#define MALLOC		'm'	/* old style malloc  */

#define BIN_MKMSGS  "mkmsgs"

#if defined(_MODERN_C)

int catclose(nl_catd);
char *catgets(nl_catd, int, int, const char *);
nl_catd catopen(const char *, int);

#if !defined(_POSIX_SOURCE) && !defined(_XOPEN_SOURCE)
char *gettxt(const char *, const char *);
#endif

#endif
#ifdef __cplusplus
}
#endif
#endif /* !__NL_TYPES_H__ */
