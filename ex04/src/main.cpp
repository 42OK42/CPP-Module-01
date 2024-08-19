/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 17:17:13 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/19 17:08:09 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/sed.hpp"

std::string readFromFile(const std::string& filename)
{
	std::ifstream file(filename.c_str());
	std::string content;
	std::string line;
	if (!file)
	{
		std::cerr << "Cannot open file: " << filename << "\n";
		return "";
	}
	while (std::getline(file, line))
		content += line + "\n";
	if (!content.empty() && content[content.size() - 1] == '\n')
		content.erase(content.size() - 1);
	file.close();
	return content;
}

void writeIntoNewFile(const std::string& content)
{
	std::string newFilename = "newfile.txt";

	std::ofstream newFile(newFilename.c_str());
	if (!newFile)
	{
		std::cerr << "Unable to open file: " << newFilename << std::endl;
		return;
	}
	newFile << content;
	newFile.close();
}

std::string replaceOccurrences(std::string source, const std::string& from, const std::string& to)
{
	size_t startPos = 0;

	while ((startPos = source.find(from, startPos)) != std::string::npos)
	{
		source.replace(startPos, from.length(), to);
		startPos += to.length();
	}
	return source;
}

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>\n";
		return -1;
	}
	std::string filename = argv[1];
	std::string from = argv[2];
	std::string to = argv[3];
	std::string content = readFromFile(filename);

	if (content.empty())
		return -1;

	std::cout << content << std::endl;
	content = replaceOccurrences(content, from, to);
	std::cout << content << std::endl;

	writeIntoNewFile(content);
}
