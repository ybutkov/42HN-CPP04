/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:54:37 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/07 18:06:34 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <string>

class MateriaSource: public IMateriaSource
{
    static constexpr int SLOTS_AMOUNT = 4;
    AMateria* slots[SLOTS_AMOUNT];
public:
    MateriaSource();
    MateriaSource(const MateriaSource& other);
    MateriaSource& operator=(const MateriaSource& right);
    ~MateriaSource() {}
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

#endif