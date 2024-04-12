/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:47:18 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/03 16:58:21 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main (void)
{
	std::string original = "HI THIS IS BRAIN";
	std::string* ptr = &original;
	std::string& ref = original;

	std::cout << "OriginalAdress:" << &original << "\n" << "PtrAdress: " << ptr << "\n" << "RefAdress: " << &ref << std::endl;
	std::cout << "Original:" << original << "\n" << "Ptr: " << *ptr << "\n" << "Ref: " << ref << std::endl;
}