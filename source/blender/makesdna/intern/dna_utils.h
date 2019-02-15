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
 */

/** \file \ingroup DNA
 */

#ifndef __DNA_UTILS_H__
#define __DNA_UTILS_H__

struct MemArena;

int DNA_elem_array_size(const char *str);

uint DNA_elem_id_offset_start(const char *elem_full);
uint DNA_elem_id_offset_end(const char *elem_full);
uint DNA_elem_id_strip_copy(char *elem_dst, const char *elem_src);
uint DNA_elem_id_strip(char *elem);
bool DNA_elem_id_match(
        const char *elem_search, const int elem_search_len,
        const char *elem_full,
        uint *r_elem_full_offset);
char *DNA_elem_id_rename(
        struct MemArena *mem_arena,
        const char *elem_src, const int elem_src_len,
        const char *elem_dst, const int elem_dst_len,
        const char *elem_full_src, const int elem_full_src_len,
        const uint elem_full_offset_start);

#endif /* __DNA_UTILS_H__ */