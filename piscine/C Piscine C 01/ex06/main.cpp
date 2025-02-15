/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 10:53:15 by rpambo            #+#    #+#             */
/*   Updated: 2024/10/12 13:12:14 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl harl;
	
	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
		return (1);
	}
	
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int choice;
	for (int i = 0; i < 4; i++)
	{
		if (argv[1] == levels[i])
			choice = i;
	}
	switch (choice + 1)
	{
		case 1:
			harl.complain("DEBUG");
			break;
		case 2:
			harl.complain("INFO");
			break;
		case 3:
			harl.complain("WARNING");
			break;
		case 4:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}
