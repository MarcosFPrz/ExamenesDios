#pragma once
#include "Sujeto.h"

class Observador
{
	Sujeto *model;
	int denom;

public:
	Observador(Sujeto *mod, int div) 
	{
		model = mod;
		denom = div;
		model->attach(this);
	}

	virtual void update() = 0;

protected:
	Sujeto * getSubject() 
	{
		return model;
	}

	int getDivisor() 
	{
		return denom;
	}
};

void Sujeto::notify() 
{
	for (int i = 0; i < views.size(); i++)
		views[i]->update();
}

