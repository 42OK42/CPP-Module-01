/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:10:24 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/19 14:54:47 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIEHORDE_H__
#define __ZOMBIEHORDE_H__

#include <string>
#include <iostream>
#include <sstream>

class Zombie
{
public:

	typedef	Zombie		t;

	Zombie(void);
	//Zombie(std::string name);
	~Zombie();

	void announce(void) const;
	void setName(std::string _name);
	
private:
	std::string _name;
	
};

	Zombie* zombieHorde( int N, std::string _name );

#endif
