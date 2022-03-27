#ifndef __ATTRIBUTES_H__
#define __ATTRIBUTES_H__

#include "Module.h"

class Attributes : public Module
{
public:
	// Constructor
	Attributes();

	// Destructor
	~Attributes();

	bool Awake(pugi::xml_node&);

	float GetVit();
	float GetAtk();
	float GetVel();

public:

	float vit;
	float atk;
	float vel;
};

#endif

