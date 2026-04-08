/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 21:38:42 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/08 19:04:16 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include <iostream>
#include <string_view>

AAnimal::AAnimal(void): AAnimal("Just_animal") {}

AAnimal::AAnimal(std::string type): type(type)
{
	std::cout << "Animal constructor creates animal. Type: " << type << std::endl;	
}

AAnimal::AAnimal(const AAnimal& other): type(other.type)
{
	std::cout << "Animal Copy_constructor copies Animal from " << other.type << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Animal Destructor destroys " << type << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	std::cout << "Animal Copy assignment operator" << std::endl;	
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}
