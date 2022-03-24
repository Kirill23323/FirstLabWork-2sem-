#pragma once
#include "GenModHuman.h"
class TGenModHumanShooter : public TGenModHuman 
{
public:
	virtual void Attack();
	virtual void PrintInfo();
	TGenModHumanShooter();
	TGenModHumanShooter(const TGenModHumanShooter& human);
};