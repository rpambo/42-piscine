/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 10:05:21 by rpambo            #+#    #+#             */
/*   Updated: 2024/10/12 11:08:45 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl; 
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
	
	complain("INFO");
	complain("WARNING");
	complain("ERROR");
}

void Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
	complain("WARNING");
	complain("ERROR");
}

void Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
	complain("ERROR");
}

void Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain( std::string level )
{
	std::size_t	i;

	void (Harl::*functions[])(void) = {
            &Harl::debug,
            &Harl::info,
            &Harl::warning,
            &Harl::error
        };

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	size_t size = sizeof(levels) / sizeof(levels[0]);	
	i = 0;
	while (i < size)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			return ;
		}
		i++;
	}
}
