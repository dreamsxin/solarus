/*
 * Copyright (C) 2006-2016 Christopho, Solarus - http://www.solarus-games.org
 *
 * Solarus is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Solarus is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef SOLARUS_TILE_INFO_H
#define SOLARUS_TILE_INFO_H

#include "solarus/Common.h"
#include "solarus/lowlevel/Rectangle.h"
#include <string>

namespace Solarus {

class TilePattern;

/**
 * \brief Wraps construction parameters of a tile.
 */
struct TileInfo {

  int layer;
  Rectangle box;
  std::string pattern_id;
  TilePattern* pattern = nullptr;

  const Rectangle& get_bounding_box() const {
    return box;
  }
};

}

#endif