#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*inventory[4];
	
public:
	MateriaSource();
	MateriaSource(MateriaSource const &materia);
	MateriaSource &operator=(MateriaSource const &materia);
	void learnMateria(AMateria *);
	AMateria *createMateria(std::string const & type);
	~MateriaSource();
};

#endif