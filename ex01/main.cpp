/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:08:22 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/02 21:47:21 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void) const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

int	main (void)
{
	int N = 5;
	std::string name = "HordeZombie";

	Zombie* horde = zombieHorde(N, name);
	for (int i = 0; i < N; ++i)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (1);
}
