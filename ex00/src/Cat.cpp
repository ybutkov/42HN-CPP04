/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 21:38:42 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/05 22:27:55 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string_view>

Cat::Cat(void): Cat("Cat") {}

Cat::Cat(std::string type): Animal(type)
{
	std::cout << "Cat constructor creates animal. Type: " << this->type << std::endl;	
}

Cat::Cat(const Cat& other): Animal(other)
{
	std::cout << "Cat Copy_constructor copies Animal from " << other.type << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor destroys " << this->type << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat Copy assignment operator" << std::endl;	
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat says Meow!" << std::endl;
}

std::string Cat::getType(void) const
{
	return this->type;
}
