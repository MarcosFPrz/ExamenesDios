#include "Single.h"
Single* Single::Instance_ = 0;


Single * Single::Instance()
{
	if (Instance_ == 0)
	{
		Instance_ = new Single;
	}

	return Instance_;
}

Single::Single()
{
}


Single::~Single()
{
}
