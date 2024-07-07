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

Zombie **zombieHorde(int N, std::string name);

int main(void)
{
	Zombie **horde;
	int		zombies;
	int		j;

	zombies = 7;
	j = 0;
	horde = zombieHorde(zombies, "paco");
	while (j < zombies)
		horde[j++]->announce();
	while (j > 0)
		delete horde[--j];
	delete [] horde;
	horde = nullptr;
	return (0);
}