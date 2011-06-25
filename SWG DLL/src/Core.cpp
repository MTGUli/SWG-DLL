#include "StdAfx.hpp"
#include "Core.hpp"

CCore* CCore::s_lpcCore;

CCore::CCore( HMODULE hModule )
	: m_hModule( hModule ), m_bFirstLoop( true )
{
}

CCore::~CCore( void )
{
}

bool CCore::Initialize( void )
{
	m_hWnd = FindWindow( NULL, L"SwgClient" );
	Game_Loop = m_cMemory.Patch<Game_Loop_t>( CMemory::Call, (DWORD) Game_Loop, (DWORD) New_Game_Loop );
	return true;
}

void CCore::GameLoop( void )
{
	if( m_bFirstLoop == true )
	{
		//Do whatever needed in first loop
		m_bFirstLoop = false;
	}
	m_cAutomate.OnGameLoop( );
}

