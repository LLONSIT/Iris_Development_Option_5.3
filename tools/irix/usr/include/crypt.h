#ifndef __CRYPT_H__
#define __CRYPT_H__
#ifdef __cplusplus
extern "C" {
#endif
#ident "$Revision: 1.4 $"
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
/*	Copyright (c) 1988 AT&T	*/
/*	  All Rights Reserved  	*/

/*	THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF AT&T	*/
/*	The copyright notice above does not evidence any   	*/
/*	actual or intended publication of such source code.	*/


/* Password and file encryption functions */

#if defined(_MODERN_C)

extern char *crypt(const char *, const char *);
extern int crypt_close(int *);
extern char *des_crypt(const char *, const char *);
extern void des_encrypt(char *, int);
extern void des_setkey(const char *);
extern void encrypt(char *, int);
extern int run_crypt(long, char *, unsigned, int *);
extern int run_setkey(int *, const char *);
extern void setkey(const char *);

extern void enigma_setkey(const char *);
extern void enigma_encrypt(char *, int);

extern void cryptbuf(char *, unsigned int, char *, char *, int);

#define X_ENCRYPT	   0
#define X_DECRYPT	  01

#define X_ECB		   0
#define	X_CBC		 010
#define X_OFM		 020
#define	X_CFB		 040
#define X_MODES		 070

#define X_DES		0000
#define X_ENIGMA	0100
#define X_ALGORITHM	0700

#endif 

#ifdef __cplusplus
}
#endif
#endif /* !__CRYPT_H__ */
