#pragma once
#include "Visitor.h"

class UpVisitor : public Visitor
{
	virtual void visit(This *e)
	{
		std::cout << "do Up on " + e->thiss() << '\n';
	}
	
	virtual void visit(That *e)
	{
		std::cout << "do Up on " + e->that() << '\n';
	}
	
	virtual void visit(TheOther *e)
	{
		std::cout << "do Up on " + e->theOther() << '\n';
	}
};

