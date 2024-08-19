/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:03:46 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/04 15:57:36 by okrahl           ###   ########.fr       */
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
	
	HumanA(std::string name, Weapon& Weapon);
	~HumanA();

	void attack(void);
	
private:
	std::string name;
	Weapon& Weaponn;
};
