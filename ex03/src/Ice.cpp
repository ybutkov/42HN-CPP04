/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 17:07:37 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/08 18:53:58 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"
#include "AMateria.hpp"
#include <iostream>

Ice::Ice(): Ice("ice") { }

Ice::Ice(std::string const & type): AMateria(type) { }

Ice::Ice(const Ice& other): AMateria(other) { }

Ice::~Ice() { }

Ice& Ice::operator=(const Ice& right)
{
    if (this != &right)
    {
        AMateria::operator=(right);
    }
    return *this;
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " 
        << target.getName() << " *" << std::endl;
}
