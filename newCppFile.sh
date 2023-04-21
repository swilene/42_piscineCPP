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

	protected:
	private:
};

#endif" >> $name.hpp

echo "#include \"$name.hpp\"

$name::$name(void)
{
	std::cout << \"$name Default constructor called\" << std::endl;

	return ;
}

$name::$name($name const & src)
{
	std::cout << \"$name Copy constructor called\" << std::endl;
	*this = src;

	return ;
}

$name & $name::operator=($name const & rhs)
{
	std::cout << \"$name Copy assignment operator called\" << std::endl;

	if (this != &rhs)
	{

	}

	return (*this);
}

$name::~$name(void)
{
	std::cout << \"$name Destructor called\" << std::endl;

	return ;
}" >> $name.cpp
}
done
