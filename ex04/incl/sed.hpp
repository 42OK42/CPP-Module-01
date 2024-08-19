/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 17:17:31 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/19 12:48:45 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <fstream>

std::string replaceOccurrences(std::string source, const std::string& from, const std::string& to);
std::string readFromFile(const std::string& filename);
void writeIntoNewFile(const std::string& content);
