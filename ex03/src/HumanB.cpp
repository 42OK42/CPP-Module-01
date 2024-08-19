/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:03:49 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/19 15:23:45 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weaponn = NULL;
}

HumanB::~HumanB()
{
	
}

void HumanB::setWeapon(Weapon& Weapon)
{
	this->_weaponn = &Weapon;
}

void HumanB::attack(void)
{
	if (this->_weaponn == NULL)
		std::cout << this->_name << " failed to attack " << std::endl;
	else
	{
		std::string	_type = this->_weaponn->getType();
		std::cout << this->_name << " attacks with their " << _type << std::endl;
	}
}