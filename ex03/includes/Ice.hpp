/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 17:05:55 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/07 17:45:58 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include <string>

class Ice: public AMateria
{
  protected:
	Ice(std::string const & type);
	Ice(const Ice &other);
	Ice &operator=(const Ice &other);

  public:
  	Ice();
	~Ice(void);
	AMateria* clone() const;
	void use(ICharacter& target);
	
};

#endif
