/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:03:54 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/19 15:23:45 by okrahl           ###   ########.fr       */
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

	std::string _name;
	Weapon* _weaponn;
};

#endif