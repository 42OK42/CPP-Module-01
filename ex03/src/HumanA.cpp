/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:03:41 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/19 15:26:14 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/HumanA.hpp"
#include "../incl/Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _weaponn(weapon)
{
	this->_name = name;
	//this->_weaponn = new Weapon(Weapon);
}

HumanA::~HumanA()
{
	
}

void HumanA::attack(void)
{
	std::string	_type = this->_weaponn.getType();
	std::cout << this->_name << " attacks with their " << _type << std::endl;
}