#pragma once
#include "Stooge.h"
#include <iostream>

class Larry : public Stooge 
{
public:
	void slap_stick()
	{
		std::cout << "Larry: poke eyes\n";
	}
};

