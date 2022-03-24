#include "GenModHumanNinja.h"
#include <iostream>

void TGenModHumanNinja::Attack()
{
	cout << "CUT CUT" << endl;
}

void TGenModHumanNinja::PrintInfo()
{
	cout << "��� \t" << this->GetName() << endl;
	cout << "��� \t" << this->GetGender() << endl;
	cout << "���� \t" << this->GetHeight() << endl;
	cout << "��� \t" << this->GetWeight() << endl;
	cout << "���� \t" << this->GetLanguage() << endl;
	cout << "������������� - ������" << endl;
	cout << "Health \t" << this->GetHp() << endl;
	cout << "Armor \t" << this->GetArmor() << endl;
}
TGenModHumanNinja::TGenModHumanNinja()
{
	age = 17;
	weight = 75;
	height = 180;
	gender = "Male";
	language = "English";
	name = "Ben";
	hp = 140;
	armor = 0;
}
TGenModHumanNinja::TGenModHumanNinja(const TGenModHumanNinja& human)
{
	age = human.age;
	weight = human.weight;
	height = human.height;
	gender = human.gender;
	language = human.language;
	name = human.name;
	hp = human.hp;
	armor = human.armor;
}