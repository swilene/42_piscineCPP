/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:25:31 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/21 19:52:45 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal*	animal = new Animal();
	const Animal*	randomAnimal = new Animal("Random animal");
	const Animal*	dog = new Dog("Dog");
	const Animal*	cat = new Cat("Cat");

	std::cout << "\n" << std::endl;

	std::cout << dog->getType() << ": ";
	dog->makeSound();
	std::cout << cat->getType() << ": ";
	cat->makeSound();
	std::cout << randomAnimal->getType() << ": ";
	animal->makeSound();

	std::cout << "\n" << std::endl;

	//delete animal;
	//delete dog;
	//delete cat;

	return (0);
}
