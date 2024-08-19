/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:03:46 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/19 15:26:14 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

#include "Weapon.hpp"

class HumanA
{
	
public:

	typedef	HumanA		t;
	
	HumanA(std::string _name, Weapon& Weapon);
	~HumanA();

	void attack(void);
	
private:
	std::string _name;
	Weapon& _weaponn;
};
