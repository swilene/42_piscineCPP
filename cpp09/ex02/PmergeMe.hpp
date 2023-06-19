/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 14:57:11 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/19 18:28:10 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <vector>
#include <list>

class	PmergeMe
{
	public:
		PmergeMe(void); //default constructor
		PmergeMe(PmergeMe const & src); //copy constructor
		PmergeMe & operator=(PmergeMe const & rhs); //copy assignment operator
		~PmergeMe(void); //destructor

		int	getVSize();
		int	getPvSize();

		void	createVector(int argc, char** argv);
		void	makePairs();
		void	sortEachPairs();
		void	insertSort(int left, int right);
		void	insert(int left, int midPoint, int right);
		void	sortVector();
		void	insertLast(int start, int end);

		class TooBigException : public std::exception
		{
			public :
				const char* what() const throw();
		};

	private:
		unsigned int	_last, _vSize, _pvSize;
		std::vector<unsigned int> _v;
		std::vector<std::pair<unsigned int, unsigned int> > _pv;
		std::list<unsigned int> _l;
		std::list<std::pair<unsigned int, unsigned int> > _pl;
};

#endif
