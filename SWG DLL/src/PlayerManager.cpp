#include "StdAfx.hpp"
#include "PlayerManager.hpp"

//Add whatever functions here

void PlayerManager::SetPlayerSpeed( float NewSpeed )
{ 
	m_fPlayerSpeed = NewSpeed; 
	return; 
}

void PlayerManager::SetZCoord( float ZCoord )
{
	m_fZCoord = ZCoord;
	return;
}