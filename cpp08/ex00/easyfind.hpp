/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:01:22 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/08 10:57:53 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

class	NotFoundException : public std::exception
{
	public:
		const char* what() const throw() { return (": not found in container"); }
};

template <typename T>
int	easyfind(T & tab, int nb)
{
	typename T::iterator it = std::find(tab.begin(), tab.end(), nb);
	if (it == tab.end())
		throw NotFoundException();
			
	return (*it);
}

#endif
