#ifndef lua_api_h

#include <stdlib.h>
#include <string.h>
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include <ctype.h>

extern void callLuaTick(tic_mem* tic);
extern void callLuaScanlineName(tic_mem* tic, s32 row, void* data, const char* name);
extern void callLuaScanline(tic_mem* tic, s32 row, void* data);
extern void callLuaBorder(tic_mem* tic, s32 row, void* data);
extern void callLuaOverline(tic_mem* tic, void* data);
extern void closeLua(tic_mem* tic);
extern void callLuaTick(tic_mem* tic);
extern void lua_open_builtins(lua_State *lua);
extern void initLuaAPI(core);

#define lua_api_h
#endif