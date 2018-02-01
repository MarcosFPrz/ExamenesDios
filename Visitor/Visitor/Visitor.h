#pragma once
#include "Element.h"
#include "That.h"
#include "TheOther.h"
#include "This.h"

class Visitor
{
public:
	virtual void visit(This *e) = 0;
	virtual void visit(That *e) = 0;
	virtual void visit(TheOther *e) = 0;
};

void This::accept(Visitor &v)
{
	v.visit(this);
}

void That::accept(Visitor &v)
{
	v.visit(this);
}

void TheOther::accept(Visitor &v)
{
	v.visit(this);
}

