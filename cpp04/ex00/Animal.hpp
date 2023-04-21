#ifndef ANIMAL_HPP
# define ANIMAL_HPP

class	Animal
{
	public:
		Animal(void); //default constructor
		Animal(Animal const & src); //copy constructor
		Animal & operator=(Animal const & rhs); //copy assignment operator
		~Animal(void); //destructor

	private:
};

#endif
