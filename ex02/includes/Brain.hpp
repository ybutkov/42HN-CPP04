/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 17:30:53 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/06 21:40:09 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
public:     
    static constexpr int IDEAS_AMOUNT = 100;
    static const std::string IDEAS_OWNER_PREFIX;

    static const std::string IDEAS_DEFAULT_PREFIX;
    std::string ideas[IDEAS_AMOUNT]; 
    
public:     
    Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    ~Brain();
    std::string& operator[](int index);
    const std::string& operator[](int index) const;
        
};

#endif