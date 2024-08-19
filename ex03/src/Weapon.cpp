/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:15:52 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/19 15:19:08 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
	
}

void Weapon::setType(std::string type)
{
	//std::cout << "im setting " << type << std::endl;
	this->_type = type;
	//std::cout << "i set " << getType() << std::endl;
}

std::string Weapon::getType(void)
{
	return (this->_type);
}