/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 21:35:35 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/05 22:25:09 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <string>

class Cat: public Animal
{
protected:
	Cat(std::string type);
  public:
	
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat(void);
	void makeSound(void) const override;
	std::string getType() const override;	

};

#endif
