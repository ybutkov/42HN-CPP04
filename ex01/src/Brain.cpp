/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 18:01:27 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/06 21:44:09 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"
#include <iostream>

const std::string Brain::IDEAS_DEFAULT_PREFIX = "Brilliant idea_";
const std::string Brain::IDEAS_OWNER_PREFIX = "'s brilliant idea_";

Brain::Brain()
{
    std::cout << "Brain constructor filled with ideas" << std::endl;	
    for (int i = 0; i < IDEAS_AMOUNT; ++i)
    {
        ideas[i] = std::string(IDEAS_DEFAULT_PREFIX) + std::to_string(i);
    }
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain Copy_constructor copies Brain" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain Copy assignment operator" << std::endl;
    if (this != &other)
    {
       for (int i = 0; i < IDEAS_AMOUNT; ++i)
        {
            this->ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor destroys ideas" << std::endl;
}

std::string& Brain::operator[](int index)
{
    if (index >= IDEAS_AMOUNT || index < 0)
        throw std::out_of_range("Index out of range");
    return ideas[index];
}

const std::string& Brain::operator[](int index) const
{
    if (index >= IDEAS_AMOUNT || index < 0)
        throw std::out_of_range("Index out of range");
    return ideas[index];
}

