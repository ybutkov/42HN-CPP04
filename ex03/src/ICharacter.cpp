/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 18:01:27 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/07 16:47:58 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ICharacter.hpp"
#include <iostream>

ICharacter::ICharacter(): ICharacter("NoBody") { }

ICharacter::ICharacter(std::string name): name(name) { }

ICharacter::ICharacter(const ICharacter& other)
{
    *this = other;
}

ICharacter& ICharacter::operator=(const ICharacter& right)
{
    if (this != &right)
    {
        this->name = right.name;
    }
    return *this;
}
