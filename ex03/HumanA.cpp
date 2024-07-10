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

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &arm) : _weapon(arm)
{
	this->_name = name;
}

void HumanA::attack(void)
{
	std::cout << this->_name 
			<< " attacks with their " 
			<< this->_weapon.getType()
			<< std::endl;
}

void HumanA::setWeapon(Weapon &str)
{
	this->_weapon = str;
}