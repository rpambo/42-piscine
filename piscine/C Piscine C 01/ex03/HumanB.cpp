/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:00:32 by rpambo            #+#    #+#             */
/*   Updated: 2024/10/11 18:17:56 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string Name) : name(Name)
{
	weapon = NULL;
}

void HumanB::attack()
{
	if (weapon)
	{
		std::cout << name << "attacks with their" << weapon->getType() << std::endl;
	}
	else
	{
		std::cout << name << " has no weapon to attack with!"<< std::endl;
	}
}

void HumanB::setWeapon(Weapon &Aweapon)
{
	weapon = &Aweapon;
}
