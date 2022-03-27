#include "Attributes.h"

#include "App.h"

#include "Log.h"

Attributes::Attributes() : Module()
{
	name.Create("attributes");

}

Attributes::~Attributes()
{

}

bool Attributes::Awake(pugi::xml_node& config) {

	LOG("Loading Attributes");
	bool ret = true;

	//better if using XML file
	vit = 10;
	atk = 1;
	vel = 1;

	return ret;
}

float Attributes::GetVit()
{
	return vit;
}

float Attributes::GetAtk()
{
	return atk;
}

float Attributes::GetVel()
{
	return vel;
}


