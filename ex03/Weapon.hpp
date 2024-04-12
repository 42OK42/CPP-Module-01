/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:13:27 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/03 18:39:12 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
public:

	typedef	Weapon		t;

	Weapon(std::string type);
	~Weapon();

	void setType(std::string type);
	std::string getType(void);
	
private:

	std::string type;
	
};


#endif