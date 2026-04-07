/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 17:05:55 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/07 17:56:25 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include <string>

class Cure: public AMateria
{
  protected:
	Cure(std::string const & type);
	Cure(const Cure& other);
	Cure &operator=(const Cure& other);

  public:
  	Cure();
	~Cure(void);
	AMateria* clone() const;
	void use(ICharacter& target);
	
};

#endif
