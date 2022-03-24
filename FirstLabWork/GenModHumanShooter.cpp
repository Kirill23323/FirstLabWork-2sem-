#include "GenModHumanShooter.h"
#include <iostream>

void TGenModHumanShooter::Attack()
{
	cout << "BANG BANG" << endl;
}

void TGenModHumanShooter::PrintInfo()
{
	cout << "��� \t" << this->GetName() << endl;
	cout << "��� \t" << this->GetGender() << endl;
	cout << "���� \t" << this->GetHeight()<< endl;
	cout << "��� \t" << this->GetWeight ()<< endl;
	cout << "���� \t" << this->GetLanguage() << endl;
	cout << "������������� - �������" << endl;
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
