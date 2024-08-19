/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:10:24 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/02 19:22:41 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <string>
#include <iostream>

class Zombie
{
public:

	typedef	Zombie		t;

	 Zombie(std::string name);
	~Zombie();

	void announce(void) const;
	
private:
	std::string name;
	
};

	Zombie* newZombie( std::string name );
	void randomChump( std::string name );

#endif
