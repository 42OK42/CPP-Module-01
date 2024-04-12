/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:15:52 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/03 20:30:02 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
	
}

void Weapon::setType(std::string type)
{
	//std::cout << "im setting " << type << std::endl;
	this->type = type;
	//std::cout << "i set " << getType() << std::endl;
}

std::string Weapon::getType(void)
{
	return (this->type);
}