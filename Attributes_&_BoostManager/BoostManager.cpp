#include "BoostManager.h"

#include "App.h"
#include "Attributes.h"

#include "Log.h"

BoostManager::BoostManager() : Module()
{
	name.Create("boostmanager");
}

//Destructor
BoostManager::~BoostManager()
{}

bool BoostManager::Awake(pugi::xml_node& config)
{
	LOG("Loading Boost Manager");
	bool ret = true;

	return ret;
}

bool BoostManager::Update(float dt)
{
	if (rifle3) BoostStat(ATK, 4);
}

void BoostManager::BoostStat(Stats stat, float n)
{
	switch (stat)
	{
	case VIT:
		app->attributes->vit += n;
		break;
	case ATK:
		app->attributes->atk += n;
		break;
	case VEL:
		app->attributes->vel += n;
		break;
	default:
		break;
	}
}

