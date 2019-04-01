/* -*- Mode: C; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2004-2005 William Jon McCann <mccann@jhu.edu>
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * Authors: William Jon McCann <mccann@jhu.edu>
 *
 */

#ifndef __GS_MONITOR_H
#define __GS_MONITOR_H

G_BEGIN_DECLS

#define GS_TYPE_MONITOR gs_monitor_get_type ()
G_DECLARE_FINAL_TYPE (GSMonitor, gs_monitor, GS, MONITOR, GObject)

GSMonitor * gs_monitor_new              (LLConfig  *config);
gboolean    gs_monitor_start            (GSMonitor *monitor,
                                         GError   **error);
G_END_DECLS

#endif /* __GS_MONITOR_H */
