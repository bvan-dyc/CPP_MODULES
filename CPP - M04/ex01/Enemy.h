#pragma once
#include <string>
#include <iostream>

class Enemy
{
public:
	Enemy(int hp, std::string const& type);
	Enemy(Enemy const&);
	~Enemy();
	std::string getType() const;
	int getHp() const;
	virtual void takeDamage(int);
	Enemy const& operator=(Enemy const&);

private:
	int _hp;
	std::string _type;
};
