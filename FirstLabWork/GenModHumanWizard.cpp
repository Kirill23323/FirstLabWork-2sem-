#include "GenModHumanWizard.h"
#include <iostream>

void TGenModHumanWizard::Attack()
{
	cout << "MAGIC MAGIC" << endl;
}

void TGenModHumanWizard::PrintInfo()
{
	cout << "Имя \t" << this->GetName() << endl;
	cout << "Пол \t" << this->GetGender() << endl;
	cout << "Рост \t" << this->GetHeight() << endl;
	cout << "Вес \t" << this->GetWeight() << endl;
	cout << "Язык \t" << this->GetLanguage() << endl;
	cout << "Специализация - маг" << endl;
	cout << "Health \t" << this->GetHp() << endl;
	cout << "Armor \t" << this->GetArmor() << endl;
}
TGenModHumanWizard::TGenModHumanWizard()
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
TGenModHumanWizard::TGenModHumanWizard(const TGenModHumanWizard& human)
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
