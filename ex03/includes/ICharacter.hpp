/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 15:11:03 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/07 16:51:18 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICARACTER_HPP
# define ICARACTER_HPP

#include <string>

class AMateria;

class ICharacter
{
protected:
    std::string name;
    ICharacter();
    ICharacter(std::string name);
    ICharacter(const ICharacter& other);
    ICharacter& operator=(const ICharacter& right);
public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

#endif