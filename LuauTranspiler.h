#include <iostream>
#include <string>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>

extern "C" {
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
#include "lobject.h"
#include "lstring.h"
#include "lfunc.h"
#include "ldo.h"
#include "lopcodes.h"
#include "lstring.h"
}

namespace LuauTranspiler {
	std::string compile(lua_State* L, std::string source);
	Proto* convert(lua_State *L, Proto* p);
};