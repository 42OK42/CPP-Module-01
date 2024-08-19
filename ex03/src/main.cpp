/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:03:57 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/19 16:18:31 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/HumanA.hpp"
#include "../incl/HumanB.hpp"
#include "../incl/Weapon.hpp"

int main()
{
	Weapon club = Weapon("golf club");

	HumanA bob("Bob", club);
	bob.attack();
	club.setType("spiked club");
	bob.attack();

	Weapon gun = Weapon("pistole");

	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(gun);
	jim.attack();
	gun.setType("machine club");
	jim.attack();

	return 0;
}