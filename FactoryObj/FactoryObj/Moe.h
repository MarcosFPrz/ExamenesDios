#pragma once
#include "Stooge.h"
#include <iostream>

class Moe : public Stooge
{
public:
	void slap_stick()
	{
		std::cout << "Moe: slap head\n";
	}
};

