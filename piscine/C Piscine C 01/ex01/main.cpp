/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 09:07:02 by rpambo            #+#    #+#             */
/*   Updated: 2024/10/11 15:00:51 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::string name;
	int	num;
	
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "How many zombies do you want to believe? ";
	std::cin >> num;
	std::cin.ignore();
	std::cout << "Name your zombies? ";
	std::getline(std::cin, name);
	std::cout << "-----------------------------------------" << std::endl;
	
	Zombie *zombiehorde = zombieHorde(num, name);
	
	int i = 0;
	while (i < num)
	{
		zombiehorde[i].announce();
		i++;
	}
	
	delete[] zombiehorde;
	
	return (0);
}
