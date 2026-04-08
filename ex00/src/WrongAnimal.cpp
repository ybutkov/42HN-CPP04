/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 16:56:26 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/08 18:59:37 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"
#include <iostream>
#include <string_view>

WrongAnimal::WrongAnimal(void): WrongAnimal("WrongAnimal") {}

WrongAnimal::WrongAnimal(std::string type): type(type)
{
	std::cout << "WrongAnimal constructor creates animal. Type: " << type << std::endl;	
}

WrongAnimal::WrongAnimal(const WrongAnimal& other): type(other.type)
{
	std::cout << "WrongAnimal Copy_constructor copies WrongAnimal from " << other.type << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor destroys " << type << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal Copy assignment operator" << std::endl;	
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "An WrongAnimal without a specific species does not make sounds, but says Hello!" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return this->type;	
}
