/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:25:31 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/24 17:00:59 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main(void)
{
	Animal*	animal[4];

	for (int i = 0; i < 4; i++)
	{
		if (!(i % 2))
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}

	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
			delete animal[i];

	std::cout << std::endl;

	Cat	myrtille = Cat();
	myrtille.getBrain().setIdeas("Aaa", 0);
	myrtille.getBrain().setIdeas("Bbb", 1);
	std::cout << "First idea: " << myrtille.getBrain().getIdeas(0) << std::endl;
	std::cout << "Second idea: " << myrtille.getBrain().getIdeas(1) << std::endl;

	std::cout << std::endl;

	Cat	grelotte = myrtille;
	std::cout << "First idea: " << grelotte.getBrain().getIdeas(0) << std::endl;
	std::cout << "Second idea: " << grelotte.getBrain().getIdeas(1) << std::endl;
	grelotte.getBrain().setIdeas("Ccc", 0);
	grelotte.getBrain().setIdeas("Ddd", 1);
	std::cout << "New ideas: " << std::endl;
	std::cout << "First idea: " << grelotte.getBrain().getIdeas(0) << std::endl;
	std::cout << "Second idea: " << grelotte.getBrain().getIdeas(1) << std::endl;
	std::cout << std::endl;

	return (0);
}
