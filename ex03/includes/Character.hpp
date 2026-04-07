/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 15:11:03 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/07 16:52:33 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CARACTER_HPP
# define CARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Character: public ICharacter
{
    static constexpr int SLOTS_AMOUNT = 4;
    AMateria* slots[SLOTS_AMOUNT];
public:
    Character();
    Character(std::string name);
    Character(const Character& other);
    Character& operator=(const Character& right);
    ~Character();
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif