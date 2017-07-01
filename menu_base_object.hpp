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
 * File:   menu_base_object.hpp
 * Author: toxicoverflow
 *
 * Created on July 1, 2017, 1:34 PM
 */

#ifndef MENU_BASE_OBJECT_HPP
#define MENU_BASE_OBJECT_HPP

#include <string>
#include "menu_object_position.hpp"
#include "menu_constants.hpp"
#include "menu_object_type.hpp"

namespace menu_framework {

  class menu_base_object {
  public:
    menu_base_object( ) = default;
    explicit menu_base_object( const menu_object_position& position );
    menu_base_object( const menu_base_object& orig );
    virtual ~menu_base_object( );

    const menu_object_position get_position( ) const noexcept;
    const std::string get_name( ) const noexcept;
    const int get_priority( ) const noexcept;
    const menu_object_type get_type( ) const noexcept;

    void set_position( const menu_object_position& position ) noexcept;
    void set_name( const std::string& name ) noexcept;
    void set_priority( const int& priority ) noexcept;
    void set_type( const menu_object_type& type ) noexcept;

  private:
    menu_object_position position_;
    std::string name_;
    int priority_;
    menu_object_type type_;
  };
}

#endif /* MENU_BASE_OBJECT_HPP */