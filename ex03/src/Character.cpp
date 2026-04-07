/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 18:01:27 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/07 16:52:52 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"
#include "ICharacter.hpp"
#include <iostream>

Character::Character(): Character("NoBody") { }

Character::Character(std::string name): ICharacter(name) {
    for (int i = 0; i < SLOTS_AMOUNT; ++i)
    {
        slots[i] = nullptr;
    }
}

Character::Character(const Character& other)
{
    *this = other;
}

Character& Character::operator=(const Character& right)
{
    if (this != &right)
    {
        ICharacter::operator=(right);
        for (int i = 0; i < SLOTS_AMOUNT; ++i)
        {
            if (slots[i] != nullptr)
                delete slots[i];
            this->slots[i] = right.slots[i];
        }
    }
    return *this;
}

std::string const & Character::getName() const
{
    return this->name;
}

Character::~Character() {}

void Character::equip(AMateria* m)
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

void Character::unequip(int idx)
{
    if (idx >= SLOTS_AMOUNT || idx < 0)
        return ;
    slots[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
    if (slots[idx] != nullptr)
    {
        slots[idx]->use(target);
    }
}
