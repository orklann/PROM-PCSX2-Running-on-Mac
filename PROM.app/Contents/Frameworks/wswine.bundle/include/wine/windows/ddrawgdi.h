/*
 * Ddrawgdi definitions
 *
 * Copyright (C) 2009 Louis Lenders
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __WINE_DDRAWGDI_H
#define __WINE_DDRAWGDI_H

#include "wine/winheader_enter.h"

#ifdef __cplusplus
extern "C" {
#endif

#define DdQueryDisplaySettingsUniqueness    GdiEntry13

ULONG APIENTRY DdQueryDisplaySettingsUniqueness(void);

#ifdef __cplusplus
}
#endif

#include "wine/winheader_exit.h"

#endif /* __WINE_DDRAWGDI_H */