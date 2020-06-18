#include "Enemy.h"

Enemy::Enemy(int hp, std::string const& type) : _hp(hp), _type(type)
{
}

Enemy::Enemy(Enemy const& src)
{
	_type = src._type;
	_hp = src._hp;
}

Enemy::~Enemy()
{
}

std::string Enemy::getType() const
{
	return _type;
}

int Enemy::getHp() const
{
	return _hp;
}

void Enemy::takeDamage(int amount)
{
	_hp -= _hp > amount ? amount : _hp;
}

Enemy const& Enemy::operator=(Enemy const& rhs)
{
	_hp = rhs._hp;
	_type = rhs._type;
	return (*this);
}
