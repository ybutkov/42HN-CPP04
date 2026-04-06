/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 16:55:32 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/06 16:56:08 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"
#include <string>

class WrongCat: public WrongAnimal
{
protected:
	WrongCat(std::string type);
  public:
	
	WrongCat();
	WrongCat(const WrongCat &other);
	WrongCat &operator=(const WrongCat &other);
	~WrongCat(void);
	void makeSound(void) const override;
	std::string getType() const override;	

};

#endif
