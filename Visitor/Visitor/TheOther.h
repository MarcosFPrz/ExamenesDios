#pragma once
#include "Element.h"

class TheOther : public Element
{
public:
	virtual void accept(Visitor &v);
	std::string theOther()
	{
		return "TheOther";
	}
};

