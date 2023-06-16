#ifndef PMERGEME_HPP
# define PMERGEME_HPP

class	PmergeMe
{
	public:
		PmergeMe(void); //default constructor
		PmergeMe(PmergeMe const & src); //copy constructor
		PmergeMe & operator=(PmergeMe const & rhs); //copy assignment operator
		~PmergeMe(void); //destructor

	protected:
	private:
};

#endif
