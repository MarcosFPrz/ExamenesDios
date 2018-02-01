#pragma once
#include "Stooge.h"
#include <iostream>

class Curly : public Stooge
{
public:
	void slap_stick()
	{
		std::cout << "Curly: suffer abuse\n";
	}

};

