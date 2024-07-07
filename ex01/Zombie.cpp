/* **************************************************************************** */
/*                                                                              */
/*                                                         :::      ::::::::    */
/*    Makefile                                           :+:      :+:    :+:    */
/*                                                     +:+ +:+         +:+      */
/*    By: aiblanco <marvin@42.fr>                    +#+  +:+       +#+         */
/*                                                 +#+#+#+#+#+   +#+            */
/*    Created: 2024/06/10 23:05:13 by aiblanco          #+#    #+#              */
/*    Updated: 2024/06/10 23:05:21 by aiblanco         ###   ########.fr        */
/*                                                                              */
/* **************************************************************************** */

#include "Zombie.hpp"
#include <iostream>


Zombie::Zombie(std::string name) : _name(name)
{}

Zombie::Zombie(void)
{}

void Zombie::announce(void)
{
	std::cout << this->_name 
	<< ": BraiiiiiiinnnzzzZ..." 
	<< std::endl;
}