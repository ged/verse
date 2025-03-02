/*
 * $Id: vs_user.h 1348 2012-09-19 20:08:18Z jiri $
 *
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
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
 * ***** END GPL LICENSE BLOCK *****
 *
 * Contributor(s): Jiri Hnidek <jiri.hnidek@tul.cz>.
 *
 */

#ifndef VS_USER_H_
#define VS_USER_H_

#include "verse_types.h"

struct VS_CTX;

typedef struct VSUser {
	struct VSUser	*prev, *next;
	uint16			user_id;
	char			*username;
	char			*password;
	char			*realname;
	uint8			fake_user;
} VSUser;

struct VSUser *vs_user_find(struct VS_CTX *vs_ctx, uint16 user_id);
void vs_user_free(struct VSUser *user);
int vs_add_other_users_account(struct VS_CTX *vs_ctx);
int vs_add_superuser_account(struct VS_CTX *vs_ctx);

#endif /* V_USER_H_ */
