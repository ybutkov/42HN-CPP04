/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 15:06:24 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/07 17:32:56 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>

class AMateria
{
protected:
	std::string type;
	AMateria();
	AMateria(std::string const &type);	
	AMateria(const AMateria &other);
	AMateria &operator=(const AMateria &other);

  public:
	virtual ~AMateria(void);
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	
};

#endif
