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
 * File:   menu_base_object.cc
 * Author: toxicoverflow
 * 
 * Created on July 1, 2017, 1:34 PM
 */

#include "menu_base_object.hpp"

namespace menu_framework {

  menu_base_object::menu_base_object( const menu_base_object& orig ) : position_( orig.position_ ), name_( orig.name_ ) {
  }

  menu_base_object::menu_base_object( const menu_object_position& position ) {
    position_ = position;
  }

  menu_base_object::~ menu_base_object( ) {
  }

  const menu_object_position menu_base_object::get_position( ) const noexcept {
    return position_;
  }

  const std::string menu_base_object::get_name( ) const noexcept {
    return name_;
  }

  const int menu_base_object::get_priority( ) const noexcept {
    return priority_;
  }

  const menu_object_type menu_base_object::get_type( ) const noexcept {
    return type_;
  }

  void menu_base_object::set_position( const menu_object_position& position ) noexcept {
    position_ = position;
  }

  void menu_base_object::set_name( const std::string& name ) noexcept {
    name_ = name;
  }

  void menu_base_object::set_priority( const int& priority ) noexcept {
    priority_ = priority;
  }

  void menu_base_object::set_type( const menu_object_type& type ) noexcept {
    type_ = type;
  }
}