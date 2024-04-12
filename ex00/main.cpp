/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:08:22 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/02 19:30:38 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void) const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int	main (void)
{
	Zombie *HeapZombie;
	
	std::string name = "HeapZom";
	HeapZombie = newZombie(name);
	HeapZombie->announce();
	delete HeapZombie;
	randomChump("StackZom");
	return (1);
}
