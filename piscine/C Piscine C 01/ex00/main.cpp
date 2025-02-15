/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 09:07:02 by rpambo            #+#    #+#             */
/*   Updated: 2024/10/11 12:26:52 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::string	option;
	std::string	name;

	std::cout << "-------------------------------" << std::endl;
	std::cout << "Choose an option" << std::endl;
	std::cout << "1) newZombie" << std::endl;
	std::cout << "2) randomChump" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	while (1)
	{
		std::cout << "option: ";
		std::getline(std::cin, option);
		if (option == "1")
		{
			std::cout << "zombie's name :";
			std::getline(std::cin, name);
			Zombie* myZombie = newZombie(name);
			myZombie->announce();
			delete myZombie;
			return (EXIT_SUCCESS);
		}
		if (option == "2")
		{
			std::cout << "zombie's name :";
			std::getline(std::cin, name);
			randomChump(name);
			return (EXIT_SUCCESS);
		}
	}
	return (0);
}
