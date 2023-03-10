#ifndef __CAPABILITY_H__
#define __CAPABILITY_H__
#ifdef __cplusplus
extern "C" {
#endif
#ident "$Revision: 1.1 $"
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

#define USER_CAPABILITY	"/etc/capability"

struct user_cap {
	char *ca_name;		/* Name */
	char *ca_default;	/* Default Capability */
	char *ca_allowed;	/* Allowed Capability */
};

/*
 * Use ia_openinfo to read this database.
 */

#ifdef __cplusplus
}
#endif
#endif /* !__CAPABILITY_H__ */
