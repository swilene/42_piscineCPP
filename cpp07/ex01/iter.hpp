/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:34:01 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/24 12:03:42 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename I>
void	iter(I* tab, int size, void (&fplusOne)(I &))
{
	for (int i = 0; i < size; i++)
		fplusOne(tab[i]);
}

template <typename I>
void	plusOne(I & e) {e++;}

#endif
