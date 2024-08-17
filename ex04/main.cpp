/* **************************************************************************** */
/*                                                                              */
/*                                                         :::      ::::::::    */
/*    Makefile                                           :+:      :+:    :+:    */
/*                                                     +:+ +:+         +:+      */
/*    By: aiblanco <marvin@42.fr>                    +#+  +:+       +#+         */
/*                                                 +#+#+#+#+#+   +#+            */
/*    Created: 2024/06/10 23:05:13 by aiblanco          #+#    #+#              */
/*    Updated: 2024/06/10 23:05:21 by aiblanco         ###   ########.fr        */
/*                                                                              */
/* **************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "ERROR. Please, enter 3 arguments" << std::endl;
		return (1);
	}
	//declarations
	std::string sourceFile(argv[1]);
	std::string str1(argv[2]);
	std::string str2(argv[3]);
	std::string destinationFile = sourceFile + ".replace";
	std::string line;
	size_t position;
	size_t sizeStr1 = str1.length();

	//files descriptors
 	std::ifstream imputFile(sourceFile, std::ios::in);
	if (!imputFile)
	{
		std::cout << "ERROR. source file cannot be opened" << std::endl;
		return (1);
	}
    std::ofstream outputFile(destinationFile, std::ios::out);
	if (!outputFile)
	{
		std::cout << "ERROR. destination file cannot be opened" << std::endl;
		imputFile.close();
		return (1);
	}
	//core
    while (std::getline(imputFile, line))
	{
		std::string result = "";
		size_t position = 0;
		while (position < line.length())
		{
			size_t posFound = line.find(str1, position);

			if (posFound == std::string::npos)
			{
				result.append(line, position, line.length() - position);
				break;
			}

			result.append(line, position, posFound - position);
			result.append(str2);

        	position = posFound + sizeStr1;
   		}
        outputFile << result << '\n';
    }
	imputFile.close();
    outputFile.close();
	return (0);
}
