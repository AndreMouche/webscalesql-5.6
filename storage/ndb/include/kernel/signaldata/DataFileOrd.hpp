/* Copyright 2008 Sun Microsystems, Inc.
    All rights reserved. Use is subject to license terms.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA */

#ifndef DATA_FILE_ORD_HPP
#define DATA_FILE_ORD_HPP

// sent to pgman instances to manipulate data file list
struct DataFileOrd {
  enum Cmd {
    CreateDataFile = 1,
    AllocDataFile = 2,
    MapFileNo = 3,
    FreeDataFile = 4
  };
  STATIC_CONST( SignalLength = 4 );
  Uint32 ret; // expected return
  Uint32 cmd;
  Uint32 file_no;
  Uint32 fd;
};

#endif
