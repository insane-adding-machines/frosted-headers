/*
 *      This file is part of frosted shared kernel-userspace headers.
 *
 *      frosted is free software: you can redistribute it and/or modify
 *      it under the terms of the GNU Lesser General Public License version 2.1, as
 *      published by the Free Software Foundation.
 *
 *
 *      frosted is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with frosted.  If not, see <http://www.gnu.org/licenses/>.
 *
 *      Authors: brabo
 *
 */

#ifndef _FROSTED_TIME_H_
#define	_FROSTED_TIME_H_

typedef unsigned long clockid_t;

/* Manifest Constants, P1003.1b-1993, p. 262 */

#define CLOCK_REALTIME (clockid_t)0
#define CLOCK_MONOTONIC (clockid_t)1

#endif
