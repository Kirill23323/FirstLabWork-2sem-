#include "GenModHuman.h"
#include <iostream>

void TGenModHuman::PrintInfo()
{
	cout << "Имя \t" << this->GetName() << endl;
	cout << "Пол \t" << this->GetGender() << endl;
	cout << "Рост \t" << this->GetHeight() << endl;
	cout << "Вес \t" << this->GetWeight() << endl;
	cout << "Язык \t" << this->GetLanguage() << endl;
	cout << "Специализация - отсутствует" << endl;
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


