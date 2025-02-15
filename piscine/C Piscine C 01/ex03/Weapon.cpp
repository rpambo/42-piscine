/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:13:04 by rpambo            #+#    #+#             */
/*   Updated: 2024/10/11 17:16:25 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string Type )
{
	type = Type;
}

std::string Weapon::getType() const { return type;}
void Weapon::setType( std::string Type ){ type = Type;}
