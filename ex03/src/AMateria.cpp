/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 15:25:14 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/07 17:31:21 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"
#include <iostream>
#include <string_view>


AMateria::AMateria(): AMateria("NoType") {}

AMateria::AMateria(std::string const &type): type(type) {}

AMateria::AMateria(const AMateria &other)
{
	*this = other;	
}

AMateria::~AMateria() {}

AMateria& AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
