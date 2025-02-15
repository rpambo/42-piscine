/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 06:19:47 by rpambo            #+#    #+#             */
/*   Updated: 2024/10/12 09:22:33 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replaceInFile(std::string& filename, std::string& s1, std::string& s2)
{
	std::ifstream inputFile;
	
	std::string content;
	std::string line;
	std::string modifiedContent;
        std::string::size_type pos = 0;
	
	inputFile.open(filename.c_str(), std::fstream::in | std::fstream::out | std::fstream::app);
	if (!inputFile)
	{
		std::cerr << "Error: Could not open file " << filename << std::endl;
		return;
	}
	while (std::getline(inputFile, line))
	{
		content += line + "\n";
	}
	inputFile.close();
	if (content.empty())
	{
		std::cerr << "Warning: The file " << filename << " is empty." << std::endl;
		return ;
	}
	while (pos < content.length())
	{
		std::string::size_type foundPos = content.find(s1, pos);
		if (foundPos == std::string::npos)
		{
			modifiedContent.append(content.substr(pos));
			break;
		}
		modifiedContent.append(content.substr(pos, foundPos - pos));
		modifiedContent.append(s2);
		pos = foundPos + s1.length();
	}
	std::string outputFilename = filename + ".replace";
	std::ofstream outputFile;
	outputFile.open(outputFilename.c_str());
	if (!outputFile)
	{
		std::cerr << "Error: Could not create file " << outputFilename << std::endl;
		return;
	}
	outputFile << modifiedContent;
	outputFile.close();
	std::cout << "Replacement complete. Output written to " << outputFilename << std::endl;
}

bool fileExists(const std::string& filename)
{
	std::ifstream file(filename.c_str());
	return file.good();
}

int main(int argc, char* argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	std::string filename =  argv[1];
	std::string s1 =  argv[2];
	std::string s2 =  argv[3];
	
	if (!fileExists(filename))
	{
		std::cout << "The file" << filename << " does not exist || you don't have permission"<< std::endl;
	}
	else
	{
		replaceInFile(filename, s1, s2);
	}
       	return 0;
}

