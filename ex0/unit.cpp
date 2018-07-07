#include <iostream>
#include "unit.h"

int	unit::_nb = 0;

unit::unit(void):_name(""),_type("unit"),_x(0),_y(0),_dam(0),_cHP(0),_mHP(0)
{

}
unit::unit(std::string const name ,std::string const type, int const x, int const y, 
		   int const dam, int const cHP, int const mHP):
	_name(name),_type(type),_x(x),_y(y),_dam(dam),_cHP(cHP),_mHP(mHP)
{
	
}

unit::~unit(void)
{
	
}

unit &unit::operator=(unit const &u)
{
	if (this != &u)
	{
		_name = u.getName();
		_type = u.getType();
		_x = u.getX();
		_y = u.getY();
		_dam = u.getDam();
		_cHP = u.getCHP();
		_mHP = u.getMHP();
	}
	return (*this);
}
unit &unit::operator+=(int const i)
{
	_cHP += i;
	if (_cHP > _mHP)
		_cHP = _mHP;
	return (*this);
}
unit &unit::operator-=(int const i)
{
	if (_cHP <= i)
		//die();
		return (*this);
	else
		_cHP -= i;
	return (*this);
}

std::string	const unit::getType(void) const
{
	return (_type);
}

std::string	const unit::getName(void) const
{
	return (_name);
}

int	unit::getX(void) const
{
	return (_x);
}
int	unit::getY(void) const
{
	return (_y);
}
int	unit::getDam(void) const
{
	return (_dam);
}
int	unit::getCHP(void) const
{
	return (_cHP);
}
int	unit::getMHP(void) const
{
	return (_mHP);
}

std::ostream &operator<<(std::ostream &os, unit const &u)
{
	os << u.getName() << " is a " << u.getType()
	   << " in " << u.getX() << "/" << u.getY() << " with "
	   << u.getCHP() << "/" << u.getMHP()
	   << "HP damaging at " << u.getDam();
	return (os);
}
