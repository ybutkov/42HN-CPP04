/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 21:35:35 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/06 21:00:28 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat: public Animal
{
	Brain* brain;
protected:
	Cat(std::string type);
  public:
	
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat(void);
	void makeSound(void) const override;
	void setIdea(int index, std::string idea);
	std::string getIdea(int index) const;
	std::string getType() const override;

};

#endif
