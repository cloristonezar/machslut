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

static const char kBytecodeMagic[] = "RSB1";
static const unsigned int kBytecodeHashSeed = 42;
static const unsigned int kBytecodeHashMultiplier = 41;

enum BytecodeConstantType
{
	Constant_Nil,
	Constant_Bool,
	Constant_Number,
	Constant_String,
	Constant_Method,
	Constant_Global,
};

class LuauSerializer {
public:
	static std::string writeClosure(lua_State* L);
	static int readClosure(lua_State* L, const char* chunkname, const char* source, size_t len);
};