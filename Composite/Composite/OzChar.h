#pragma once
#include <vector>
#include <iostream>
#include "Composite.h"
#include "Espantapajaros.h"
#include "Leon.h"

class OzChar : public Composite
{
private:
	std::vector<Composite*> personas;

public:
	OzChar();
	~OzChar();

	void Draw() override;
};

