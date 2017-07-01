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
 * File:   menu_object_position.hpp
 * Author: toxicoverflow
 *
 * Created on July 1, 2017, 1:38 PM
 */

#ifndef MENU_OBJECT_POSITION_HPP
#define MENU_OBJECT_POSITION_HPP

namespace menu_framework {

  class menu_object_position {
  public:

    menu_object_position( ) = default;
    menu_object_position( const int& x, const int& y, const int& width, const int& height );
    menu_object_position( const menu_object_position& orig );
    virtual ~menu_object_position( );

    void set_x( const int& x ) noexcept;
    void set_y( const int& y ) noexcept;

    void set_width( const int& width ) noexcept;
    void set_height( const int& height ) noexcept;

    const int get_x( ) const noexcept;
    const int get_y( ) const noexcept;

    const int get_width( ) const noexcept;
    const int get_height( ) const noexcept;

  private:
    int x_, y_;
    int width_, height_;
  };
}

#endif /* MENU_OBJECT_POSITION_HPP */