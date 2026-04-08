/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 21:38:42 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/08 19:02:52 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include <iostream>
#include <string_view>

Animal::Animal(void): Animal("Just_animal") {}

Animal::Animal(std::string type): type(type)
{
	std::cout << "Animal constructor creates animal. Type: " << type << std::endl;	
}

Animal::Animal(const Animal& other): type(other.type)
{
	std::cout << "Animal Copy_constructor copies Animal from " << other.type << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor destroys " << type << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal Copy assignment operator" << std::endl;	
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

void Animal::makeSound(void) const
{
	std::cout << "An animal without a specific species does not make sounds." << std::endl;
}

std::string Animal::getType(void) const
{
	return this->type;	
}
