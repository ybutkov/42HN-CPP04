/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 16:54:35 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/06 16:55:04 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <string>

class WrongAnimal
{
protected:
	std::string type;
	WrongAnimal(std::string type);
  public:
	
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal &operator=(const WrongAnimal &other);
	virtual ~WrongAnimal(void);
	virtual void makeSound(void) const;
	virtual std::string getType() const;

};

#endif
