/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:35:30 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/19 14:00:15 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
class	Array
{
	public: 
		Array() : _tab(new T[0]), _size(0) //default constructor
		{
			std::cout << "Array Default contructor called" << std::endl;
		}

		Array(unsigned int n) : _tab(new T[n]), _size(n) //parametric constructor
		{
			std::cout << "Parametric Default contructor called" << std::endl;
		}

		Array(Array const & src) //copy constructor
		{
			std::cout << "Array Copy constructor called" << std::endl;
			*this = src;

		}

		Array & operator=(Array const & rhs) //copy assignment operator
		{
			std::cout << "Array Copy assignment operator called" << std::endl;

			if (this != &rhs)
			{
				delete [] _tab;
				_tab = new T[rhs._size];
				for (size_t i = 0; i < rhs._size; i++)
					_tab[i] = rhs._tab[i];
				_size = rhs._size;
			}
			return (*this);
		}

		~Array()
		{
			std::cout << "Array Destructor called" << std::endl;

			delete[] _tab;
		}

		T &operator[] (int index){
			if (static_cast<unsigned int>(index) > _size || index < 0)
				throw std::exception();
			return (_tab[index]);
		}

		int	size(void) {return (_size);}

	private:
		T * _tab;
		unsigned int _size;

};
