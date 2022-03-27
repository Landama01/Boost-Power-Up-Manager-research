#ifndef __BOOSTMANAGER_H__
#define __BOOSTMANAGER_H__

#include "Module.h"

enum Stats
{
	VIT,
	ATK,
	VEL
};

class BoostManager : public Module
{
public:
	// Constructor
	BoostManager();

	// Destructor
	virtual ~BoostManager();

	bool Awake(pugi::xml_node&);

	bool Update(float dt);

	void BoostStat(Stats stat, float n);

public:
	bool rifle3 = true;
};

#endif

