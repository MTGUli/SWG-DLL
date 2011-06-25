#include "StdAfx.hpp"

CAutomate::CAutomate( void )
{
	m_dwLastCheck = 0;
}

CAutomate::~CAutomate( void )
{
}

void CAutomate::OnGameLoop( void )
{	
	DWORD dwCurrentTickCount = GetTickCount( );
	if( dwCurrentTickCount - m_dwLastCheck >= 100 ) //Tick Update
	{
		if( GetAsyncKeyState( VK_MENU ) & 0x8000) //Alt Button
		{
			//*g_bForceClientClose = true;
			*g_fFPSLimit = 60;
		}
		m_dwLastCheck = dwCurrentTickCount;
	}
}
