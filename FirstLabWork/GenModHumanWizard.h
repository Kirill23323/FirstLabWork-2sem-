#pragma once
#include "GenModHuman.h"
class TGenModHumanWizard : public TGenModHuman
{
public:
	virtual void Attack();
	virtual void PrintInfo();
	TGenModHumanWizard();
	TGenModHumanWizard(const TGenModHumanWizard& human);
};