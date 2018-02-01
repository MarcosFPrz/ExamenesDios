#pragma once
#include <iostream>
#include "Composite.h"

class Leon : public Composite
{
public:
	Leon();
	~Leon();

	void Draw() override;
};

