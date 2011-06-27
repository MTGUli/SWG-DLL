#pragma once

class PlayerManager
{
public:
	inline float GetXCoord( void ) { return m_fXCoord; }
	inline float GetYCoord( void ) { return m_fYCoord; }
	inline float GetZCoord( void ) { return m_fZCoord; }
	inline float GetPlayerSpeed( void ) { return m_fPlayerSpeed; }

	void SetPlayerSpeed( float NewSpeed );
	void SetZCoord( float ZCoord );
private:
	/* 0x0000 */ BYTE _00[ 0x5C ];
	/* 0x005C */ float m_fXCoord;
	/* 0x0060 */ BYTE _60[ 0x0C ];
	/* 0x006C */ float m_fZCoord;
	/* 0x0070 */ BYTE _70[ 0x0C ];
	/* 0x007C */ float m_fYCoord;
	/* 0x0080 */ BYTE _80[ 0x5F4 ];
	/* 0x0674 */ float m_fPlayerSpeed;
};