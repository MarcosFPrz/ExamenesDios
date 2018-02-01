#pragma once
#include "Visitor.h"

class DownVisitor : public Visitor
{
	virtual void visit(This *e)
	{
		std::cout << "do Down on " + e->thiss() << '\n';
	}
	virtual void visit(That *e)
	{
		std::cout << "do Down on " + e->that() << '\n';
	}
	virtual void visit(TheOther *e)
	{
		std::cout << "do Down on " + e->theOther() << '\n';
	}
};

