/*
 * GnomeSword Bible Study Tool
 * _dictlex.h - gui for dictionary/lexicon modules
 *
 * Copyright (C) 2000,2001,2002 GnomeSword Developer Team
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef ___DICTLEX_H_
#define ___DICTLEX_H_

#include "main/settings.h"
#include "main/dictlex.h"

void on_notebook_dictlex_switch_page(GtkNotebook * notebook,
			       GtkNotebookPage * page,
			       gint page_num, GList * dl_list);
GtkWidget *gui_create_dictlex_pm(DL_DATA * dl, GList * mods);
void gui_create_dictlex_pane(SETTINGS * s,DL_DATA * dl, 
						gint count);
							
#endif

