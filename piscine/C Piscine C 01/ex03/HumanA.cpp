/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:18:17 by rpambo            #+#    #+#             */
/*   Updated: 2024/10/11 17:08:18 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA (std::string Name, Weapon& Aweapon) : name(Name), weapon(Aweapon) {}

void HumanA::attack()
{
	std::cout << name << "attacks with their"  << weapon.getType() << std::endl; 
}
