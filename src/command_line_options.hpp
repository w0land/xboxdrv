/* 
**  Xbox360 USB Gamepad Userspace Driver
**  Copyright (C) 2008 Ingo Ruhnke <grumbel@gmx.de>
**
**  This program is free software: you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation, either version 3 of the License, or
**  (at your option) any later version.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef HEADER_COMMAND_LINE_OPTIONS_HPP
#define HEADER_COMMAND_LINE_OPTIONS_HPP

#include <vector>
#include <map>

#include "modifier.hpp"
#include "xboxmsg.hpp"
#include "uinput.hpp"
#include "arg_parser.hpp"

class Xboxdrv;

class CommandLineParser 
{
public:
  ArgParser argp;

public:
  CommandLineParser();

  void parse_args(int argc, char** argv, Options* options);

  void print_help() const;
  void print_led_help() const;
  void print_version() const;
  void create_ini_schema();
};

extern Options* g_options;

#endif

/* EOF */
