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

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	this->_type = str;
}

Weapon::Weapon(void)
{
	this->_type = "the fists";
}

const std::string &Weapon::getType(void)
{
	const std::string &str = this->_type;
	return (str);
}

void Weapon::setType(std::string str)
{
	this->_type = str;
}
