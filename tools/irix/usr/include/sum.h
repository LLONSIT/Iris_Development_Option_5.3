#ifndef __SUM_H__
#define __SUM_H__
#ifdef __cplusplus
extern "C" {
#endif
/*
 * sum.h
 *
 *
 * Copyright 1991, Silicon Graphics, Inc.
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

#ident "$Revision: 1.3 $"
/*
 *	$Header: /proj/irix5.3/isms/irix/include/RCS/sum.h,v 1.3 1992/04/22 17:03:59 huy Exp $
 */
struct suminfo {
	long	si_nbytes;
	long	si_sum;
};
#ifdef __cplusplus
}
#endif
#endif /* !__SUM_H__ */
