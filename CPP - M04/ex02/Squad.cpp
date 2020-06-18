#include "Squad.h"

Squad::Squad()
{
}

Squad::Squad(Squad const& src)
{
	int count = _members.size();
	for (int i = 0; i < count; i++)
	{
		ISpaceMarine* cpy = _members[i]->clone();
		delete _members[i];
		_members[i] = cpy;
		i++;
	}
}

Squad::~Squad()
{
	int count = _members.size();
	for (int i = 0; i < count; i++)
	{
		delete _members[i];
		i++;
	}
}

int Squad::getCount() const
{
	return _members.size();
}

ISpaceMarine* Squad::getUnit(int index) const
{
	int count = _members.size();
	if (index >= 0 && index < count)
		return(_members[index]);
	return nullptr;
}

int Squad::push(ISpaceMarine* newMember)
{
	if (newMember && std::find(_members.begin(), _members.end(), newMember) == _members.end())
	{
		_members.push_back(newMember);
		return(1);
	}
	return(0);

}

Squad Squad::operator=(Squad const &rhs) {
	int count = _members.size();
	for (int i = 0; i < count; i++)
	{
		ISpaceMarine* cpy = _members[i]->clone();
		delete _members[i];
		_members[i] = cpy;
		i++;
	}
	return (*this);
}
