#include "GenModHuman.h"
#include <iostream>

void TGenModHuman::PrintInfo()
{
	cout << "��� \t" << this->GetName() << endl;
	cout << "��� \t" << this->GetGender() << endl;
	cout << "���� \t" << this->GetHeight() << endl;
	cout << "��� \t" << this->GetWeight() << endl;
	cout << "���� \t" << this->GetLanguage() << endl;
	cout << "������������� - �����������" << endl;
	cout << "Health \t" << this->GetHp() << endl;
	cout << "Armor \t" << this->GetArmor() << endl;
	cout << endl;
}

TGenModHuman::TGenModHuman()
{
	age = 17;
	weight = 75;
	height = 180;
	gender = "Male";
	language = "English";
	name = "Ben";
	hp = 100;
	armor = 0;
}

TGenModHuman::TGenModHuman(const TGenModHuman& human)
{
	age = human.age;
	weight = human.weight;
	height = human.height;
	gender = human.gender;
	language = human.language;
	name = human.name;
}

void TGenModHuman::Attack()
{
	cout << "PUNCH PUNCH" << endl;
}


