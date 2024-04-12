/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:07:34 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/02 21:47:15 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	//hallo
}

/* Zombie::Zombie(std::string name)
{
	this->name = name;
} */

Zombie::~Zombie(void)
{
	std::cout << name << " is being destroyed." << std::endl;
}