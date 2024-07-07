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

Zombie **zombieHorde(int N, std::string name)
{
	int			i;
	Zombie **horde;

	horde = new Zombie*[N];
	i = 0;
	while (i < N)
	{
		horde[i++] = new Zombie(name);
	}
	return (horde);
}