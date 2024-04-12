/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:11:14 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/04 21:52:12 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <fstream>

class Harl
{
private:

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	
public:

	Harl();
	~Harl();

	void complain( std::string level );
	void harlFilter( std::string level );
};
