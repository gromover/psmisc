/*
 * comm.h - command name length definition 
 *
 * Copyright 1995 Werner Almesberger
 * Copyright 2012 Craig Small <csmall@enc.com.au>
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef COMM_H
#define COMM_H

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

/*
 * COMM_LEN should be the same size as TASK_COMM_LEN in the Linux source
 * at include/linux/sched.h
 * However, that doesn't include the brackets that may be in the field.
 */
#define COMM_LEN 18

#endif
