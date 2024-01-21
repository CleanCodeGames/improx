#pragma once
#include "Engine/System/System.h"
#include "Engine/System/Input/Input.h"
#include "Engine/System/Geometry/Geometry.h"
#include "Gameplay/World/Settings/WorldSettings.h"

class oLevel : public URA
{
	DECLARATION_URA(oLevel, public)

protected:

	bool m_is_level_complete;
	std::string m_name_level;
	WorldSettings m_world_settings;
};
