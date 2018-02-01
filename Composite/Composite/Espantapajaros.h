#pragma once
#include <iostream>
#include "Composite.h"

class Espantapajaros : public Composite
{
public:
	Espantapajaros();
	~Espantapajaros();

	void Draw() override;
};

