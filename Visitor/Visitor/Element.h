#pragma once
#include <string>
#include <iostream>

class Element
{
public:
	virtual void accept(class Visitor &v) = 0;
};

