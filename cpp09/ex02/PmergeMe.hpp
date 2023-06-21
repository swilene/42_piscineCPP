/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 14:57:11 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/21 14:24:08 by saguesse         ###   ########.fr       */
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
		virtual ~PmergeMe(void); //destructor

		//int	getLSize();
		//int	getPairsLSize();

		virtual void	createContainer(int argc, char** argv) = 0;
		virtual void	makePairs() = 0;
		virtual void	sortEachPairs() = 0;
		virtual void	insertSort(int left, int right) = 0;
		virtual void	insert(int left, int midPoint, int right) = 0;
		virtual void	sortContainer() = 0;
		virtual void	insertLast(int start, int end) = 0;

		class TooBigException : public std::exception
		{
			public :
				const char* what() const throw();
		};

	protected:
		unsigned int _last;

		unsigned int _lSize, _pairsLSize;
		std::list<unsigned int> _l;
		std::list<std::pair<unsigned int, unsigned int> > _pairsL;
};

#endif
