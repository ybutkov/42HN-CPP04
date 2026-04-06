/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 21:57:51 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/05 22:28:06 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>
#include <string_view>

Dog::Dog(void): Dog("Dog") {}

Dog::Dog(std::string type): Animal(type)
{
	std::cout << "Dog constructor creates animal. Type: " << this->type << std::endl;	
}

Dog::Dog(const Dog& other): Animal(other)
{
	std::cout << "Dog Copy_constructor copies from " << other.type << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor destroys " << this->type << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog Copy assignment operator" << std::endl;	
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog says Woof!" << std::endl;
}

std::string Dog::getType(void) const
{
	return this->type;
}
