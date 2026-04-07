/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 15:26:17 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/07 20:55:24 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"
#include <iostream>
#include <string_view>


MateriaSource::MateriaSource()
{
    for (int i = 0; i < SLOTS_AMOUNT; ++i)
    {
        slots[i] = nullptr;
    }    
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& right)
{
    if (this != &right)
    {
        for (int i = 0; i < SLOTS_AMOUNT; ++i)
        {
            if (slots[i] != nullptr)
                delete slots[i];
            this->slots[i] = (right.slots[i] != nullptr) ? right.slots[i]->clone() : nullptr;
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < SLOTS_AMOUNT; ++i)
    {
        if (slots[i] == nullptr)
        {
            this->slots[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < SLOTS_AMOUNT; ++i)
    {
        if (slots[i] != nullptr && slots[i]->getType() == type)
        {
            return slots[i]->clone();
        }
    }
    
    return nullptr;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < SLOTS_AMOUNT; ++i)
    {
        if (slots[i] != nullptr)
        {
            delete slots[i];
            slots[i] = nullptr;
        }
    }
}
