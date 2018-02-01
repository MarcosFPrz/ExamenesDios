#include <iostream>
#include <vector>
#include "Stooge.h"
#include "Curly.h"
#include "Larry.h"
#include "Moe.h"

int main()
{
	std::vector<Stooge*> roles;
	int choice;

	while (true)
	{
		std::cout << "Larry(1) Moe(2) Curly(3) Go(0): ";
		std::cin >> choice;
		if (choice == 0)
			break;
		else if (choice == 1)
			roles.push_back(new Larry);
		else if (choice == 2)
			roles.push_back(new Moe);
		else
			roles.push_back(new Curly);
	}

	for (int i = 0; i < roles.size(); i++)
		roles[i]->slap_stick();
	for (int i = 0; i < roles.size(); i++)
		delete roles[i];

	system("Pause");
}