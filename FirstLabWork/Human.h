#pragma once
#include <stdio.h>
#include <string>
using namespace std;

class THuman
{
protected:
	int age;
	int weight;
	int height;
	int armor;
	int hp;
	string gender;
	string language;
	string name;
public:
	void SetAge(int ageValue);
	int GetAge();
	void SetWeight(int weightValue);
	int GetWeight();
	void SetHeight(int heightValue);
	int GetHeight();
	void SetName(string name);
	string GetName();
	void SetGender(string gender);
	string GetGender();
	void SetLanguage(string language);
	string GetLanguage();
	void SetHp(int hpValue);
	int GetHp();
	void SetArmor(int armorValue);
	int GetArmor();
	virtual void Attack() = 0;
	virtual void PrintInfo() = 0;


};
