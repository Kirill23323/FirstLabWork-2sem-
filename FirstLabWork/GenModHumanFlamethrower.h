#pragma once
#include "GenModHuman.h"
class TGenModHumanFlamethrower : public TGenModHuman
{
public:
	 virtual void Attack();
	 virtual void PrintInfo();
	TGenModHumanFlamethrower();
	TGenModHumanFlamethrower(const TGenModHumanFlamethrower& human);
};