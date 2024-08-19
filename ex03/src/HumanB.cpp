/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:03:49 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/19 12:39:06 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->Weaponn = NULL;
}

HumanB::~HumanB()
{
	
}

void HumanB::setWeapon(Weapon& Weapon)
{
	this->Weaponn = &Weapon;
}

void HumanB::attack(void)
{
	if (this->Weaponn == NULL)
		std::cout << this->name << " failed to attack " << std::endl;
	else
	{
		std::string	type = this->Weaponn->getType();
		std::cout << this->name << " attacks with their " << type << std::endl;
	}
}