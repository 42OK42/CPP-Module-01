/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 17:17:31 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/04 18:25:23 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <fstream>

std::string	replaceOccurrences(std::string source, std::string from, std::string to);
std::string	readFromFile(std::string filename);
void		writeIntoNewFile(std::string content);
