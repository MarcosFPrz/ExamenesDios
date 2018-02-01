#pragma once
#include "Element.h"

class That : public Element
{
public:
	virtual void accept(Visitor &v);
	std::string that()
	{
		return "That";
	}
};

