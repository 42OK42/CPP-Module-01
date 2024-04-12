/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:03:41 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/04 17:14:09 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): Weaponn(weapon)
{
	this->name = name;
	//this->Weaponn = new Weapon(Weapon);
}

HumanA::~HumanA()
{
	
}

void HumanA::attack(void)
{
	std::string	type = this->Weaponn.getType();
	std::cout << this->name << " attacks with their " << type << std::endl;
}