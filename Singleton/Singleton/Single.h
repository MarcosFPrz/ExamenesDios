#pragma once
class Single
{
public:
	static Single* Instance();
protected:
	Single();
private:
	static Single* Instance_;
	~Single();
};

