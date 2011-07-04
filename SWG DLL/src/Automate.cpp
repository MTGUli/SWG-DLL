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
			//*g_bForceClientClose = true; //Example
			//*g_fFPSLimit = 60; //Example
			//PlayerManager* Player = *g_LocalPlayer;
			//Player->SetPlayerSpeed(10); //Example of setting speed
			char* char1 = "SwgClient";
			char* char2 = "allowMultipleInstances";
			bool tmp = getKeyBool(char1,char2, 0);
			if(tmp == 1)
				*g_fFPSLimit = 60;
			/*
			getKeyBool, getKeyInt, getKeyFloat
			Returns the value of the key if it exists
			if it doesn't exist it outputs whatever value you
			put into the 3rd input
			*/
		}
		m_dwLastCheck = dwCurrentTickCount;
	}
}