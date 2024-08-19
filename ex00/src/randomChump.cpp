/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:07:48 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/19 12:28:14 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"

void randomChump( std::string name )
{
	Zombie StackZombie(name);
	StackZombie.announce();
}
