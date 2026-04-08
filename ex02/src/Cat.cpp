/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 21:38:42 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/08 13:27:09 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string_view>

Cat::Cat(void): Cat("Cat") {}

Cat::Cat(std::string type): AAnimal(type), brain(new Brain())
{
	std::cout << "Cat constructor creates animal. Type: " << this->type << std::endl;
	for (int i = 0; i < Brain::IDEAS_AMOUNT; ++i)
	{
		(*this->brain)[i] = this->type + Brain::IDEAS_OWNER_PREFIX + std::to_string(i);
	}
}

Cat::Cat(const Cat& other): AAnimal(other), brain(new Brain(*other.brain))
{
	std::cout << "Cat Copy_constructor copies Animal from " << other.type << std::endl;
}

Cat::~Cat(void)
{
	delete brain;
	std::cout << "Cat Destructor destroys " << this->type << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat Copy assignment operator" << std::endl;	
	if (this != &other)
	{
		AAnimal::operator=(other);
		*(this->brain) = *(other.brain);
	}
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat says Meow!" << std::endl;
}

void Cat::setIdea(int index, std::string idea)
{
	(*brain)[index] = idea;
}

std::string Cat::getIdea(int index) const
{
	return (*brain)[index];
}

std::string Cat::getType(void) const
{
	return this->type;
}
