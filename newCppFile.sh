#!/bin/bash

for name in "$@"
do {
upperstr=$(echo $name | tr '[:lower:]' '[:upper:]')

echo "#ifndef "$upperstr"_HPP
# define "$upperstr"_HPP

class	$name
{
	public:
		$name(void); //default constructor
		$name($name const & src); //copy constructor
		$name & operator=($name const & rhs); //copy assignment operator
		~$name(void); //destructor

	private:
};

#endif" >> $name.hpp

echo "#include \"$name.hpp\"

$name::$name(void)
{
	std::cout << \"Default constructor called\" << std::endl;

	return ;
}

$name::$name($name const & src)
{
	std::cout << \"Copy constructor called\" << std::endl;
	*this = src;

	return ;
}

$name & $name::operator=($name const & rhs)
{
	std::cout << \"Copy assignment operator called\" << std::endl;

	if (this != &rhs)
	{

	}

	return (*this);
}

$name::~$name(void)
{
	std::cout << \"Destructor called\" << std::endl;

	return ;
}

// *** Orthodox Canonical Form ***" >> $name.cpp
}
done
