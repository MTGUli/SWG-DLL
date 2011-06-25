#include "NetApp.hpp"
#include "PlayerManager.hpp"

#if defined( _DEFINE_PTRS )

#define MakeVar( x, y, z ) x y = (x) z;
#define MakeFnc( ret, call, param, name, offset ) \
	name##_t name = (##name##_t) offset;
#define MakeAsm( x, y ) DWORD x = (DWORD) y;

#else

#define MakeVar( x, y, z ) extern x y;
#define MakeFnc( ret, call, param, name, offset ) \
	typedef ret##(##call##*##name##_t)##param##; \
	extern name##_t name;
#define MakeAsm( x, y ) extern DWORD x;

#endif

// Variables
MakeVar( float*, g_fFPSLimit, 0x019446D0)
MakeVar( bool*, g_bScreenRefesh, 0x004237A7)
MakeVar( bool*, g_bForceClientClose, 0x019085A2)
MakeVar( PlayerManager**, g_LocalPlayer, 0x0191BFB4)
// Function Pointers
MakeFnc( void, __fastcall, ( void ), Game_Loop, 0x004237B0)


#undef MakeFnc
#undef MakeVar
#undef MakeAsm
