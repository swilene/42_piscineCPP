#ifndef CAT_HPP
# define CAT_HPP

class	Cat
{
	public:
		Cat(void); //default constructor
		Cat(Cat const & src); //copy constructor
		Cat & operator=(Cat const & rhs); //copy assignment operator
		~Cat(void); //destructor

	private:
};

#endif
