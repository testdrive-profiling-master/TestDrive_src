#pragma once

#ifndef LUABRIDGEDEMO_LUA_VERSION
  #define LUABRIDGEDEMO_LUA_VERSION 550   // use 5.5.0
#endif

#ifndef LUALIBRARY_SOURCE

#if LUABRIDGEDEMO_LUA_VERSION >= 502
  #include "lua-5.5.0/src/lua.hpp"

#else
  #error "Unknown LUA_VERSION_NUM"

#endif

#endif
