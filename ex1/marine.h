#ifndef _MARINE_HPP
#define _MARINE_HPP

#include "unit.h"

class marine: public unit
{
	public:
		marine(void);
		marine(marine const &m);
		marine(std::string name, int const x, int const y);
		virtual ~marine(void);

		marine &operator=(marine const &m);

		virtual void die(void);
		virtual void move(int x, int y);

		void stimpack(void);
};

#endif
