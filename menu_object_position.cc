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
 * File:   menu_object_position.cc
 * Author: toxicoverflow
 * 
 * Created on July 1, 2017, 1:38 PM
 */

#include "menu_object_position.hpp"

namespace menu_framework {

  menu_object_position::menu_object_position( const menu_object_position& orig ) : x_( orig.x_ ), y_( orig.y_ ), width_( orig.width_ ), height_( orig.height_ ) {
  }

  menu_object_position::~ menu_object_position( ) {
    x_ = 0;
    y_ = 0;
    width_ = 0;
    height_ = 0;
  }

  menu_object_position::menu_object_position( const int& x, const int& y, const int& width, const int& height ) : x_( x ), y_( y ), width_( width ), height_( height ) {
  }

  void menu_object_position::set_y( const int& y ) noexcept {
    y_ = y;
  }

  void menu_object_position::set_x( const int& x ) noexcept {
    x_ = x;
  }

  void menu_object_position::set_width( const int& width ) noexcept {
    width_ = width;
  }

  void menu_object_position::set_height( const int& height ) noexcept {
    height_ = height;
  }

  const int menu_object_position::get_x( ) const noexcept {
    return x_;
  }

  const int menu_object_position::get_y( ) const noexcept {
    return y_;
  }

  const int menu_object_position::get_height( ) const noexcept {
    return height_;
  }

  const int menu_object_position::get_width( ) const noexcept {
    return width_;
  }
}
