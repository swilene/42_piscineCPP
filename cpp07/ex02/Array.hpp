/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:35:30 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/15 18:40:25 by saguesse         ###   ########.fr       */
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

		Array(int n) : _tab(new T[n]), _size(n) //parametric constructor
		{
			std::cout << "Parametric Default contructor called" << std::endl;
		}

		Array(Array const & src) //copy constructor
		{
			std::cout << "Array Copy constructor called" << std::endl;

			this->~Array();
			this->_size = src._size;
			this->_tab = new T[src._size];
			for (int i = 0; i < this->_size; i++)
				this->_tab[i] = src._tab[i];
		}

		Array & operator=(Array const & rhs) //copy assignment operator
		{
			std::cout << "Array Copy assignment operator called" << std::endl;

			if (this != &rhs)
			{
				this->_size = rhs._size;
				this->_tab = new T[rhs._size];
				for (int i = 0; i < this->_size; i++)
					this->_tab[i] = rhs._tab[i];
			}
			return (*this);
		}

		~Array()
		{
			std::cout << "Array Destructor called" << std::endl;

			delete[] _tab;
		}

		T &operator[] (int index){
			if (index > _size || index < 0)
				throw std::exception();
			return (_tab[index]);
		}

		int	size(void) {return (_size);}

	private:
		T * _tab;
		int _size;

};
