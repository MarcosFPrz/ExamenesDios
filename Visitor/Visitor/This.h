#pragma once
#include "Element.h"

class This : public Element
{
public:
	virtual void accept(Visitor &v);
	std::string thiss()
	{
		return "This";
	}
};

