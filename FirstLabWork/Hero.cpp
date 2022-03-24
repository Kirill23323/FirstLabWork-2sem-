#include "Human.h"
#include "Hero.h"

void THero::ShowMyHero(THuman* hero)
{
	hero->PrintInfo();
	hero->Attack();
}
