/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:03:54 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/03 20:23:26 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __HUMANB_H__
#define __HUMANB_H__

#include <string>
#include <iostream>

#include "Weapon.hpp"

class HumanB
{
public:

	typedef	HumanB		t;

	HumanB(std::string name);
	~HumanB();

	void attack(void);
	void setWeapon(Weapon& Weapon);
	
private:

	std::string name;
	Weapon* Weaponn;
};

#endif