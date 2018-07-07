#ifndef _UNIT_H
#define _UNIT_H

#include <string>
#include <iostream>

class unit
{
protected:
	std::string	_name;
	std::string	_type;
	int	_x;
	int	_y;
	int	_dam;
	int	_cHP;
	int	_mHP;
	static int	_nb;
public:
	unit(void);
	unit(unit const &u);
	unit(std::string const name, std::string const type, int const x, int const y,
		 int const dam, int const cHP, int const mHP);
	virtual ~unit(void);

	unit &operator=(unit const &u);
	unit &operator+=(int const i);
	unit &operator-=(int const i);

	
	std::string const getType(void) const;
	std::string const getName(void) const;
	int	getX(void) const;
	int	getY(void) const;
	int	getDam(void) const;
	int	getCHP(void) const;
	int	getMHP(void) const;

	virtual void die(void);
	virtual void move(int x, int y);
	void attack(unit &target) const;
};

std::ostream &operator<<(std::ostream &os, unit const &u);

#endif
