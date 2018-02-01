#pragma once
#include <iostream>
#include "Observador.h"

class ModObserver : public Observador
{
public:
	ModObserver(Sujeto *mod, int div) : Observador(mod, div) {}
	void update() {
		int v = getSubject()->getVal(), d = getDivisor();
		std::cout << v << " mod " << d << " is " << v % d << '\n';
	}
};

