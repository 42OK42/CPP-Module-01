/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:07:34 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/19 13:49:16 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"

Zombie::Zombie(void)
{
	//hallo
}

/* Zombie::Zombie(std::string name)
{
	this->name = name;
} */

void Zombie::announce(void) const
{
	std::cout << name << " " << num << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::setNum(int num)
{
	this->num = num;
}

Zombie::~Zombie(void)
{
	std::cout << name << " " << num  << " is being destroyed." << std::endl;
}