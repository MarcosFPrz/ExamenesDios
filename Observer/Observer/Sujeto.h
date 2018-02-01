#pragma once
#include <iostream>
#include <vector>

class Sujeto
{
	std::vector<class Observador*> views;
	int value;

public:
	void attach(Observador *obs) 
	{
		views.push_back(obs);
	}
	
	void setVal(int val) 
	{
		value = val;
		notify();
	}
	
	int getVal() 
	{
		return value;
	}
	
	void notify();
};

