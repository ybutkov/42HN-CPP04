/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 21:35:26 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/06 22:28:07 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
protected:
	std::string type;
	Animal();
	Animal(std::string type);	
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);

  public:
	virtual ~Animal(void);
	virtual void makeSound(void) const = 0;
	virtual std::string getType() const = 0;
	
};

#endif
