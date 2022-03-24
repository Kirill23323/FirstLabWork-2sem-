#include "GenModHumanShooter.h"
#include <iostream>

void TGenModHumanShooter::Attack()
{
	cout << "BANG BANG" << endl;
}

void TGenModHumanShooter::PrintInfo()
{
	cout << "Имя \t" << this->GetName() << endl;
	cout << "Пол \t" << this->GetGender() << endl;
	cout << "Рост \t" << this->GetHeight()<< endl;
	cout << "Вес \t" << this->GetWeight ()<< endl;
	cout << "Язык \t" << this->GetLanguage() << endl;
	cout << "Специализация - стрелок" << endl;
	cout << "Health \t" << this->GetHp() << endl;
	cout << "Armor \t" << this->GetArmor() << endl;
}
TGenModHumanShooter::TGenModHumanShooter() 
{
	age = 17;
	weight = 75;
	height = 180;
	gender = "Male";
	language = "English";
	name = "Ben";
	hp = 100;
	armor = 25;
}
TGenModHumanShooter::TGenModHumanShooter(const TGenModHumanShooter& human)
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
