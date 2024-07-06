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

# include "Zombie.hpp"

//Create a new object using head memory
Zombie* newZombie( std::string name );

//Use an object using stack memory
void randomChump(std::string name);

int main(void)
{
	Zombie *z_paco;

	z_paco = newZombie("Paco");
	z_paco->announce();
	randomChump("Paco2");
	delete z_paco;
	z_paco = nullptr;
	return (0);
}