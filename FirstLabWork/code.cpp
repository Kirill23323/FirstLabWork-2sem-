#include "Human.h"
#include "GenModHuman.h"
#include "GenModHumanFlamethrower.h"
#include "GenModHumanNinja.h"
#include "GenModHumanShooter.h"
#include "GenModHumanTank.h"
#include "Hero.h"
#include <iostream>
#include <clocale>
using namespace std;


int main() 
{
	setlocale(LC_ALL, "Rus");
	TGenModHumanNinja a1;
	a1.SetName("����");
	a1.SetGender("�������");
	a1.SetWeight(55);
	a1.SetHeight(165);
	a1.SetLanguage("�������");
	TGenModHumanTank a2;
	a2.SetName("�������");
	a2.SetGender("�������");
	a2.SetWeight(100);
	a2.SetHeight(200);
	a2.SetLanguage("��������");
	a2.SetArmor(10000);
	a2.SetHp(10000);
	THero firstHero;
	firstHero.ShowMyHero(&a1);
	THero secondHero;
	secondHero.ShowMyHero(&a2);
	TGenModHumanTank a3 = a2;
	THero thirdHero;
	thirdHero.ShowMyHero(&a3);
	return 0;
}