/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:11:22 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/09 15:25:44 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "./harlFilter DEBUG, INFO, WARNING or ERROR" << std::endl;
		return (1);
	}
	
	std::string str = argv[1];
	
	Harl	harl;
	const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int chosenLevel = -1;
	
	for (int i = 0; i < 4; ++i)
	{
		if (str == levels[i])
		{
			chosenLevel = i;
			break;
		}
	}

	if (chosenLevel == -1)
	{
		std::cerr << "./harlFilter DEBUG, INFO, WARNING or ERROR" << std::endl;
		return (1);
	}
	
	switch (chosenLevel)
	{
	case 0:
		std::cout << "[ DEBUG ]" << std::endl;
		harl.complain("DEBUG");
	case 1:
		std::cout << "[ INFO ]" << std::endl;
		harl.complain("INFO");
	case 2:
		std::cout << "[ WARNING ]" << std::endl;
		harl.complain("WARNING");
	case 3:
		std::cout << "[ ERROR ]" << std::endl;
		harl.complain("ERROR");
		break;
	default:
		//std::cout << "Hallo" << std::endl;
		break;
	}
}
