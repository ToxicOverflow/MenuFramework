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
 * File:   menu_object_type.hpp
 * Author: toxicoverflow
 *
 * Created on July 1, 2017, 2:17 PM
 */

#ifndef MENU_OBJECT_TYPE_HPP
#define MENU_OBJECT_TYPE_HPP

namespace menu_framework {

  enum menu_object_type : int {
    object_dropdown,
    object_button,
    object_checkbox,
    object_list,
    object_multi_list,
    object_slider_float,
    object_slider_int,
    object_tab
  };
}

#endif /* MENU_OBJECT_TYPE_HPP */

