/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:25:31 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/10 10:32:12 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal*	animal = new Animal;
	const Animal*	dog = new Dog("Dog");
	const Animal*	cat = new Cat("Cat");

	const WrongAnimal*	wrongAnimal = new WrongAnimal;
	const WrongAnimal*	wrongCat = new WrongCat("Wrong Cat");
	const WrongCat*		wrongCat2 = new WrongCat("Wrong Cat2");

	std::cout << std::endl;

	std::cout << dog->getType() << ": ";
	dog->makeSound();
	std::cout << cat->getType() << ": ";
	cat->makeSound();
	animal->makeSound();
	wrongCat->makeSound();
	wrongAnimal->makeSound();
	std::cout << wrongCat2->getType() << ": ";
	wrongCat2->makeSound();

	std::cout << std::endl;

	delete animal;
	delete dog;
	delete cat;
	delete wrongAnimal;
	delete wrongCat;
	delete wrongCat2;

	return (0);
}
