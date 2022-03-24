#include "GenModHumanFlamethrower.h"
#include <iostream>

void TGenModHumanFlamethrower::Attack()
{
	cout << "FIRE FIRE" << endl;
}

void TGenModHumanFlamethrower::PrintInfo()
{
	cout << "Имя \t" << this->GetName() << endl;
	cout << "Пол \t" << this->GetGender() << endl;
	cout << "Рост \t" << this->GetHeight() << endl;
	cout << "Вес \t" << this->GetWeight() << endl;
	cout << "Язык \t" << this->GetLanguage() << endl;
	cout << "Специализация - огнеметчик" << endl;
	cout << "Health \t" << this->GetHp() << endl;
	cout << "Armor \t" << this->GetArmor() << endl;
}
TGenModHumanFlamethrower::TGenModHumanFlamethrower()
{
	age = 17;
	weight = 75;
	height = 180;
	gender = "Male";
	language = "English";
	name = "Ben";
	hp = 300;
	armor = 120;
}
TGenModHumanFlamethrower::TGenModHumanFlamethrower(const TGenModHumanFlamethrower& human)
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