/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 21:37:10 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/06 16:45:09 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <string>

class Dog: public Animal
{
protected:
	Dog(std::string type);
  public:
	
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog(void);
	void makeSound(void) const override;
	std::string getType() const override;
};

#endif
