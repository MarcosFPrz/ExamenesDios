#include "OzChar.h"

OzChar::OzChar()
{
	for (size_t i = 0; i < 3; ++i)
	{
		Composite* personaje = nullptr;
		int random_number = rand() % 3;
		if (random_number < 1)
		{
			personaje = new Espantapajaros();
		}
		else {
			personaje = new OzChar();
		}

		personas.push_back(personaje);
	}
}

OzChar::~OzChar()
{
	for (Composite* persona : personas) {
		delete persona;
	}
}

void OzChar::Draw()
{
	std::cout << "Lo que ellos quieren\n";
	for (auto& persona : personas) {
		persona->Draw();
	}
}
