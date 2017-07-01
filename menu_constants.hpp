/*
 * Copyright 2017 toxicoverflow.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* 
 * File:   menu_constants.hpp
 * Author: toxicoverflow
 *
 * Created on July 1, 2017, 2:11 PM
 */

#ifndef MENU_CONSTANTS_HPP
#define MENU_CONSTANTS_HPP

#include <vector>
#include "menu_object_type.hpp"

namespace menu_framework {
  namespace menu_constants {
    const std::vector<std::pair<menu_object_type, int>> priorities = std::vector<std::pair<menu_object_type, int>>({
      { menu_object_type::object_dropdown, 1000 }
    } );
  }
}

#endif /* MENU_CONSTANTS_HPP */