/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 21:34:38 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/08 18:23:20 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string_view>

int main()
{
	AAnimal *animals[6];
	int amount_ideas_to_print = 5;
	
	for (int i = 0; i < 3; ++i)
	{
		animals[2*i] = new Cat();
		animals[2*i + 1] = new Dog();
	}
	std::cout << "==================================================" <<std::endl;
	amount_ideas_to_print = 
		Brain::IDEAS_AMOUNT <= amount_ideas_to_print ? Brain::IDEAS_AMOUNT : amount_ideas_to_print; 
	
	Cat* cat = dynamic_cast<Cat*>(animals[0]);
	for (int i = 0; i < amount_ideas_to_print; ++i)
	{
		std::cout << cat->getIdea(i) << std::endl;
	}
	std::cout << "==================================================" <<std::endl;

	Cat *cat2 = new Cat();
	Dog *dog2 = new Dog();
	std::cout << "==================================================" <<std::endl;
	Cat cat3 = *cat2;
	Dog dog3 = *dog2;
	std::cout << "==================================================" <<std::endl;

	for (int i = 0; i < amount_ideas_to_print; ++i)
	{
		cat2->setIdea(i, "I have new idea");
		dog2->setIdea(i, "i think soo too");
		std::cout << "Cat2: " << cat2->getIdea(i) << std::endl;
		std::cout << "Cat3: " << cat3.getIdea(i) << std::endl;
		std::cout << "Dog2: " << dog2->getIdea(i) << std::endl;
		std::cout << "Dog3: " << dog3.getIdea(i) << std::endl;
	}
	std::cout << "==================================================" <<std::endl;

	for (AAnimal* animal: animals)
	{
		delete animal;
	}
	std::cout << "=============== ERASED animals ===================" <<std::endl;
	delete cat2;
	delete dog2;
	std::cout << "================   FINISH   ======================" <<std::endl;
	return 0;
}	
