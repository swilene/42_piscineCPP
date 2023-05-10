/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:25:31 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/10 10:18:25 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main(void)
{
	AAnimal*	animal[4];

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

	Cat	garfield = Cat();

	std::cout << std::endl;

	garfield.getBrain().setIdeas("Aaa", 0);
	garfield.getBrain().setIdeas("Bbb", 1);
	std::cout << "Garfield's first idea: " << garfield.getBrain().getIdeas(0) << std::endl;
	std::cout << "Garfield's second idea: " << garfield.getBrain().getIdeas(1) << std::endl;

	std::cout << std::endl;

	Cat	felix = garfield;

	std::cout << std::endl;

	std::cout << "Felix's first idea: " << felix.getBrain().getIdeas(0) << std::endl;
	std::cout << "Felix's second idea: " << felix.getBrain().getIdeas(1) << std::endl;
	felix.getBrain().setIdeas("Ccc", 0);
	felix.getBrain().setIdeas("Ddd", 1);
	std::cout << "New ideas: " << std::endl;
	std::cout << "Felix's first idea: " << felix.getBrain().getIdeas(0) << std::endl;
	std::cout << "Felix's second idea: " << felix.getBrain().getIdeas(1) << std::endl;
	std::cout << "Garfield's first idea: " << garfield.getBrain().getIdeas(0) << std::endl;
	std::cout << "Garfield's second idea: " << garfield.getBrain().getIdeas(1) << std::endl;

	std::cout << std::endl;

	return (0);
}
