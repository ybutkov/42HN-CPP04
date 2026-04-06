/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 21:34:38 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/06 17:02:15 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << std::endl;
	
	std::cout << "meta has type " << meta->getType() << std::endl;
	std::cout << "dog has type " << dog->getType() << std::endl;
	std::cout << "cat has type " << cat->getType() << std::endl;
	std::cout << std::endl;

	dog->makeSound();
	cat->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	
	delete meta;
	delete dog;
	delete cat;
	std::cout << std::endl;

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << std::endl;
	
	std::cout << "wrongMeta has type " << wrongMeta->getType() << std::endl;
	std::cout << "wrongCat has type " << wrongCat->getType() << std::endl;
	std::cout << std::endl;

	wrongCat->makeSound();
	wrongMeta->makeSound();
	std::cout << std::endl;
	
	delete wrongMeta;
	delete wrongCat;
	
	return 0;
}	
