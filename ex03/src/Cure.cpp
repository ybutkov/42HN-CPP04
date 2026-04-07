/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 17:07:37 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/07 17:59:34 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"
#include "AMateria.hpp"
#include <iostream>

Cure::Cure(): Cure("cure") { }

Cure::Cure(std::string const & type): AMateria(type) { }

Cure::Cure(const Cure& other): AMateria(other)
{
    *this = other;
}

Cure::~Cure() { }

Cure& Cure::operator=(const Cure& right)
{
    if (this != &right)
    {
        AMateria::operator=(right);
    }
    return *this;
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " 
        << target.getName() << "'s wounds *" << std::endl;
}
