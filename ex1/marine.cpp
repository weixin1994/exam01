#include "marine.h"

marine::marine(void):
	unit("Jim","Marine", 0, 0, 6, 40, 40)
{
	std::cout << "Do you want a piece of me, boy ?" << std::endl;
}
marine::marine(marine const &m):
	unit()
{
	*this = m;
	std::cout << "Do you want a piece of me, boy ?" << std::endl;
}
marine::marine(std::string name, int const x, int const y):
	unit("Jim","Marine", x, y, 6, 40, 40)
{
	std::cout << "Do you want a piece of me, boy ?" << std::endl;
}
marine::~marine(void)
{

}

marine	&marine::operator=(marine const &m)
{
	if (this != &m)
	{
		_type = m.getType();
		_x = m.getX();
		_y = m.getY();
		_dam = m.getDam();
		_cHP = m.getCHP();
		_mHP = m.getMHP();
	}
	return (*this);
}

void	marine::die(void)
{
	std::cout << "Unit #" << " (" << _type
			  << ") died." << std::endl;
	_cHP = 0;
	std::cout << "Aaaargh..." << std::endl;
}
void	marine::move(int x, int y)
{
	_x = x;
	_y = y;
	std::cout << "Rock'n'roll !!!" << std::endl;
}
void	marine::stimpack(void)
{
	_dam += 1;
	if (_cHP < 11 && _cHP > 0)
		_cHP = 1;
	else
		_cHP -= 10;
	std::cout << "Ho yeah..." << std::endl;
}
