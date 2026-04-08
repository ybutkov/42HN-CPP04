/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 21:57:51 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/08 13:27:16 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include <iostream>
#include <string_view>

Dog::Dog(void): Dog("Dog") {}

Dog::Dog(std::string type): AAnimal(type), brain(new Brain())
{
	std::cout << "Dog constructor creates animal. Type: " << this->type << std::endl;
	for (int i = 0; i < Brain::IDEAS_AMOUNT; ++i)
	{
		(*this->brain)[i] = this->type + Brain::IDEAS_OWNER_PREFIX + std::to_string(i);
	}
}

Dog::Dog(const Dog& other): AAnimal(other), brain(new Brain(*other.brain))
{
	std::cout << "Dog Copy_constructor copies from " << other.type << std::endl;
}

Dog::~Dog(void)
{
	delete brain;
	std::cout << "Dog Destructor destroys " << this->type << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog Copy assignment operator" << std::endl;	
	if (this != &other)
	{
		AAnimal::operator=(other);
		*(this->brain) = *(other.brain);
	}
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog says Woof!" << std::endl;
}

void Dog::setIdea(int index, std::string idea)
{
	(*brain)[index] = idea;
}

std::string Dog::getIdea(int index) const
{
	return (*brain)[index];
}

std::string Dog::getType(void) const
{
	return this->type;
}
