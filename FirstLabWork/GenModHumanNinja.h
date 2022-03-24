#pragma once
#include "GenModHuman.h"
class TGenModHumanNinja : public TGenModHuman
{
public:
	virtual void Attack();
	virtual void PrintInfo();
	TGenModHumanNinja();
	TGenModHumanNinja(const TGenModHumanNinja& human);
};