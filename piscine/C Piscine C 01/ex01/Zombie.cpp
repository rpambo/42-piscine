/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 08:26:03 by rpambo            #+#    #+#             */
/*   Updated: 2024/10/11 09:05:56 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie( std::string Name)
{
	name = Name;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombi " << name << " was destroyed." << std::endl; 
}
