#pragma once
#include "GenModHuman.h"
class TGenModHumanTank : public TGenModHuman
{
public:
	virtual void Attack();
	virtual void PrintInfo();
	TGenModHumanTank();
	TGenModHumanTank(const TGenModHumanTank& human);
};