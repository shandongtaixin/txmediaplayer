/*
 * ff_ffplaye_imp_inc.h
 *
 * Copyright (c) 2003 Fabrice Bellard
 * Copyright (c) 2013 Zhang Rui <bbcallen@gmail.com>
 *
 * This file is part of ijkPlayer.
 *
 * ijkPlayer is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * ijkPlayer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with ijkPlayer; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef FFPLAY__FF_FFPLAY_IMP_INC_H
#define FFPLAY__FF_FFPLAY_IMP_INC_H

#include <math.h>
#include "ff_cmdutils.h"
#include "ff_fferror.h"

// FIXME: 9 work around NDKr8e or gcc4.7 bug
// isnan() may not recognize some double NAN, so we test both double and float
#if defined(__ANDROID__)
#ifdef isnan
#undef isnan
#endif
#define isnan(x) (isnan((double)(x)) || isnanf((float)(x)))
#endif

#if defined(__ANDROID__)
#define printf(...) ALOGD(__VA_ARGS__)
#endif

#define FFP_XPS_PERIOD (3)
// #define FFP_SHOW_FPS
// #define FFP_SHOW_VDPS
// #define FFP_SHOW_AUDIO_DELAY
// #define FFP_SHOW_DEMUX_CACHE
// #define FFP_SHOW_PKT_RECYCLE

#define FFP_BUF_MSG_PERIOD (3)

#endif
