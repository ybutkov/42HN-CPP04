/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 16:58:13 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/06 16:59:26 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include <string_view>

WrongCat::WrongCat(void): WrongCat("Cat") {}

WrongCat::WrongCat(std::string type): WrongAnimal(type)
{
	std::cout << "WrongCat constructor creates animal. Type: " << this->type << std::endl;	
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other)
{
	std::cout << "WrongCat Copy_constructor copies Animal from " << other.type << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor destroys " << this->type << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat Copy assignment operator" << std::endl;	
	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat says Woof!" << std::endl;
}

std::string WrongCat::getType(void) const
{
	return this->type;
}
