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
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
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
	std::cout << "Unknown level!" << std::endl;
}
