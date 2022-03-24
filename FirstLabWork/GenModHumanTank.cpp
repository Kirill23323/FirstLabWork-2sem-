#include "GenModHumanTank.h"
#include <iostream>

void TGenModHumanTank::Attack()
{
	cout << "BOOM BOOM" << endl;
}

void TGenModHumanTank::PrintInfo()
{
	cout << "Имя \t" << this->GetName() << endl;
	cout << "Пол \t" << this->GetGender() << endl;
	cout << "Рост \t" << this->GetHeight() << endl;
	cout << "Вес \t" << this->GetWeight() << endl;
	cout << "Язык \t" << this->GetLanguage() << endl;
	cout << "Специализация - танк" << endl;
	cout << "Health \t" << this->GetHp() << endl;
	cout << "Armor \t" << this->GetArmor() << endl;
}
TGenModHumanTank::TGenModHumanTank()
{
	age = 17;
	weight = 75;
	height = 180;
	gender = "Male";
	language = "English";
	name = "Ben";
	hp = 1000;
	armor = 250;
}
TGenModHumanTank::TGenModHumanTank(const TGenModHumanTank& human)
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
