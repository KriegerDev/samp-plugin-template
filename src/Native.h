#ifndef _NATIVE_H_
#define _NATIVE_H_
#include <sdk\plugin.h>

namespace Native
{
	// native PrintPlayerH(const playerid);
	cell PrintPlayerH(AMX* amx, cell* params);
	extern "C" const AMX_NATIVE_INFO native_list[];
}

#endif