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

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = nullptr;
}

void HumanB::attack(void)
{
	std::cout << this->_name 
			<< " attacks with their " 
			<< this->_weapon->getType()
			<< std::endl;
}

void HumanB::setWeapon(Weapon &str)
{
	Weapon *arm;

	arm = &str;
	this->_weapon = arm;
}
