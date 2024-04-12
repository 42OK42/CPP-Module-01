/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:10:24 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/02 21:46:32 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIEHORDE_H__
#define __ZOMBIEHORDE_H__

#include <string>
#include <iostream>

class Zombie
{
public:

	typedef	Zombie		t;

	Zombie(void);
	//Zombie(std::string name);
	~Zombie();

	void announce(void) const;
	void setName(std::string name);
	
private:
	std::string name;
	
};

	Zombie* zombieHorde( int N, std::string name );

#endif
