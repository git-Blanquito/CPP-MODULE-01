/* **************************************************************************** */
/*                                                                              */
/*                                                         :::      ::::::::    */
/*    Makefile                                           :+:      :+:    :+:    */
/*                                                     +:+ +:+         +:+      */
/*    By: aiblanco <marvin@42.fr>                    +#+  +:+       +#+         */
/*                                                 +#+#+#+#+#+   +#+            */
/*    Created: 2024/08/15 23:05:13 by aiblanco          #+#    #+#              */
/*    Updated: 2024/08/15 23:05:21 by aiblanco         ###   ########.fr        */
/*                                                                              */
/* **************************************************************************** */

#include "Harl.hpp"

int numberCase(std::string str)
{
	std::string cases[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (str == cases[i])
			return (i);
	}
	return (-1);
}

int main(int argc, char **argv)
{
	Harl k;
	if(argc != 2)
	{
		std::cout << "The argument entered is wrong, please enter one of this: DEBUG, INFO, WARNING, ERROR" 
				<< std::endl;
		return (0);
	}
	std::string switchMode(argv[1]);

	switch (numberCase(switchMode)) {
		case 0:
			k.complain("DEBUG");
			k.complain("INFO");
			k.complain("WARNING");
			k.complain("ERROR");
			break;
		case 1:
			k.complain("INFO");
			k.complain("WARNING");
			k.complain("ERROR");
			break;
		case 2:
			k.complain("WARNING");
			break;
		case 3:
			k.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}
