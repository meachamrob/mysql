/* Copyright (C) 2003 MySQL AB

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA */

#ifndef DIGETNODES_HPP
#define DIGETNODES_HPP

#include <NodeBitmask.hpp>
#include <ndb_limits.h>

/**
 * 
 */
class DiGetNodesConf {
  /**
   * Receiver(s)
   */
  friend class Dbtc;
  /**
   * Sender(s)
   */
  friend class Dbdih;
public:
  STATIC_CONST( SignalLength = 3 + MAX_REPLICAS );
private:  
  Uint32 zero;
  Uint32 fragId;
  Uint32 reqinfo;
  Uint32 nodes[MAX_REPLICAS];
};
/**
 * 
 */
class DiGetNodesReq {
  /**
   * Sender(s)
   */
  friend class Dbtc;
  /**
   * Receiver(s)
   */
  friend class Dbdih;
public:
  STATIC_CONST( SignalLength = 3 );
private:
  Uint32 notUsed;
  Uint32 tableId;
  Uint32 hashValue;
};
#endif
