#include "Human.h"
#include <iostream>
using namespace std;

void THuman::SetAge(int ageValue)
{
	if(ageValue > 0)
		age = ageValue;
}

int THuman::GetAge()
{
	return age;
}

void THuman::SetWeight(int weightValue)
{
	if (weightValue > 0)
		weight = weightValue;
}

int THuman::GetWeight()
{
	return weight;
}

void THuman::SetHeight(int heightValue)
{
	if(heightValue > 0)
		height = heightValue;

}

int THuman::GetHeight()
{
	return height;
}

void THuman::SetName(string name)
{
	this->name = name;

}

string THuman::GetName()
{
	return name;
}

void THuman::SetGender(string gender)
{
	this->gender = gender;
}

string THuman::GetGender()
{
	return gender;
}

void THuman::SetLanguage(string language)
{
	this->language = language;

}

string THuman::GetLanguage()
{
	return language;
}

void THuman::SetHp(int hpValue)
{
	if(hpValue > 0)
		hp = hpValue;
}

int THuman::GetHp()
{
	return hp;
}

void THuman::SetArmor(int armorValue)
{
	if(armorValue > 0)
		armor = armorValue;
}

int THuman::GetArmor()
{
	return armor;
}

