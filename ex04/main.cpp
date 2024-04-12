/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 17:17:13 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/04 18:29:27 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string	readFromFile(std::string filename)
{
	std::ifstream file(filename);
	if (!file)
	{
		std::cerr << "Cannot open file: " << filename << "\n";
		return ("");
	}
	std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
	file.close();
	return (content);
}

void writeIntoNewFile(std::string content)
{
	std::string newFilename = "newfile.txt";

	std::ofstream newFile(newFilename);
	if (!newFile)
	{
		std::cerr << "Unable to open file: " << newFilename << std::endl;
		return;
	}
	newFile << content;
	newFile.close();
}

std::string replaceOccurrences(std::string source, std::string from, std::string to)
{
	size_t startPos = 0;
	
	while ((startPos = (source.find(from, startPos))) != std::string::npos)
	{
		source = source.substr(0, startPos) + to + source.substr(startPos + from.length());
		startPos += to.length(); 
	}
	return (source);
}

int main (int argc, char** argv)
{
	/* std::string result = replaceOccurrences("hallo meisteer was gehts dir", "was", "wie");
	std::cout << result << std::endl; */
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>\n";
		return (-1);
	}
	std::string filename = argv[1];
	std::string from = argv[2];
	std::string to = argv[3];
	std::string content = readFromFile(filename);

	if (content.empty())
		return (-1); 

	std::cout << content << std::endl;
	content = replaceOccurrences(content, from, to);
	std::cout << content << std::endl;

	writeIntoNewFile(content);
}
