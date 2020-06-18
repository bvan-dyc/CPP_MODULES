#pragma once
#include "ISquad.h"
#include "ISpaceMarine.h"
#include <string>
#include <vector>

class Squad : public ISquad
{
public:
	Squad();
	~Squad();
	Squad(Squad const& src);
	int getCount() const;
	ISpaceMarine* getUnit(int) const;
	int push(ISpaceMarine*);
	Squad operator=(Squad const& rhs);
private:
	std::vector<ISpaceMarine*> _members;
};

