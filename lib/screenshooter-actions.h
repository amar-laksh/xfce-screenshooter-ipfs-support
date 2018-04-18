/*  $Id$
 *
 *  Copyright © 2008-2009 Jérôme Guelfucci <jeromeg@xfce.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 * */

#ifndef __HAVE_ACTIONS_H__
#define __HAVE_ACTIONS_H__

#include "screenshooter-utils.h"
#include "screenshooter-capture.h"
#include "screenshooter-global.h"
#include "screenshooter-dialogs.h"
#include "screenshooter-imgur.h"

gboolean screenshooter_take_screenshot_idle (ScreenshotData *sd);
gboolean screenshooter_action_idle          (ScreenshotData *sd);

#endif
