#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{	
public:
	Ice();
	Ice(Ice const &ice);

	Ice &operator=(Ice const &ice);
	void use(ICharacter &target);
	AMateria* clone() const;

	~Ice();
};

#endif