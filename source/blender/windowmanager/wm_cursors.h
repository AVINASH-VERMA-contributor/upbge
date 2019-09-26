/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2001-2002 by NaN Holding BV.
 * All rights reserved.
 */

/** \file
 * \ingroup wm
 */

#ifndef __WM_CURSORS_H__
#define __WM_CURSORS_H__

void wm_init_cursor_data(void);

// typedef struct BCursor_s BCursor;
typedef struct BCursor {

  char *small_bm;
  char *small_mask;

  char small_sizex;
  char small_sizey;
  char small_hotx;
  char small_hoty;

  char *big_bm;
  char *big_mask;

  char big_sizex;
  char big_sizey;
  char big_hotx;
  char big_hoty;

  bool can_invert_color;

} BCursor;

typedef enum WMCursorType {
  WM_CURSOR_DEFAULT = 1,
  WM_CURSOR_WAIT,
  WM_CURSOR_EDIT,
  WM_CURSOR_X_MOVE,
  WM_CURSOR_Y_MOVE,
  WM_CURSOR_COPY,

  WM_CURSOR_NW_ARROW,
  WM_CURSOR_NS_ARROW,
  WM_CURSOR_EW_ARROW,
  WM_CURSOR_CROSS,
  WM_CURSOR_EDITCROSS,
  WM_CURSOR_BOXSEL,
  WM_CURSOR_KNIFE,
  WM_CURSOR_VERTEX_LOOP,
  WM_CURSOR_TEXT_EDIT,
  WM_CURSOR_PAINT_BRUSH,
  WM_CURSOR_HAND,
  WM_CURSOR_NSEW_SCROLL,
  WM_CURSOR_NS_SCROLL,
  WM_CURSOR_EW_SCROLL,
  WM_CURSOR_EYEDROPPER,
  WM_CURSOR_SWAP_AREA,
  WM_CURSOR_H_SPLIT,
  WM_CURSOR_V_SPLIT,
  WM_CURSOR_N_ARROW,
  WM_CURSOR_S_ARROW,
  WM_CURSOR_E_ARROW,
  WM_CURSOR_W_ARROW,
  WM_CURSOR_STOP,

  WM_CURSOR_NONE,

  /* --- ALWAYS LAST ----- */
  WM_CURSOR_NUM,
} WMCursorType;

struct wmEvent;
struct wmWindow;

bool wm_cursor_arrow_move(struct wmWindow *win, const struct wmEvent *event);

#endif /* __WM_CURSORS_H__ */
