/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:34:24 by rpambo            #+#    #+#             */
/*   Updated: 2024/10/11 17:11:26 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB( std::string Name );
		void setWeapon(Weapon &Aweapon);
		void    attack( void );
};

#endif
