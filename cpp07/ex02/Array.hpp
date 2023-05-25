/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:35:30 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/25 15:25:01 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
class	Array
{
	public: 
		Array() //default constructor
		{
			_size = 0;
			_tab = new T[0];
			_tab[0] = 0;
		}

		Array(int n) //parametric constructor
		{
			_size = n;
			_tab = new T[n];
			for (int i = 0; i < n; i++)
				_tab[n] = 0;
		}

		Array(Array const & src) //copy constructor
		{
			_size = src._size;
			_tab = new T[_size];
			for (int i = 0; i < _size; i++)
				_tab[i] = src._tab[i];
		}

		Array & operator=(Array const & rhs) //copy assignment operator
		{
			if (this != &rhs)
			{
				_size = rhs._size;
				_tab = new T[_size];
				for (int i = 0; i < _size; i++)
					_tab[i] = rhs._tab[i];
			}
			return (*this);
		}

		~Array() {delete[] _tab;}

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
