#pragma once
#include "Human.h"
class TGenModHuman : public THuman 
{
public:
	TGenModHuman();
	TGenModHuman(const TGenModHuman& human);
	virtual void Attack();
	virtual void PrintInfo();
};