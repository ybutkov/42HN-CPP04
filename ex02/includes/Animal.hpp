/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 21:35:26 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/08 13:26:36 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class AAnimal
{
protected:
	std::string type;
	AAnimal();
	AAnimal(std::string type);	
	AAnimal(const AAnimal &other);
	AAnimal &operator=(const AAnimal &other);

  public:
	virtual ~AAnimal(void);
	virtual void makeSound(void) const = 0;
	virtual std::string getType() const = 0;
	
};

#endif
