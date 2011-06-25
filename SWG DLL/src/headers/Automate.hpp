#pragma once

#include <map>
#include <list>

class CAutomate
{
public:
	CAutomate( void );
	~CAutomate( void );

	void OnGameLoop( void );

private:
	DWORD	m_dwLastCheck;
};