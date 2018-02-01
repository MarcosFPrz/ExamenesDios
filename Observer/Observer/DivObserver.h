#pragma once
#include <iostream>
#include "Observador.h"

class DivObserver : public Observador
{
public:
	DivObserver(Sujeto *mod, int div) : Observador(mod, div) {}
	
	void update() 
	{	
		int v = getSubject()->getVal(), d = getDivisor();
		std::cout << v << " div " << d << " is " << v / d << '\n';
	}
};

