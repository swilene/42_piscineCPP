/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:58:50 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/24 11:24:40 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T & x, T & y)
{
	T z = x;
	x = y;
	y = z;
}

template <typename T>
T const & max(T const & x, T const & y)
{
	return (x>y ? x : y);
}

template <typename T>
T const & min(T const & x, T const & y)
{
	return (x<y ? x : y);
}

#endif
