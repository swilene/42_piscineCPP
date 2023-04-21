#ifndef DOG_HPP
# define DOG_HPP

class	Dog
{
	public:
		Dog(void); //default constructor
		Dog(Dog const & src); //copy constructor
		Dog & operator=(Dog const & rhs); //copy assignment operator
		~Dog(void); //destructor

	private:
};

#endif
