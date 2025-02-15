/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:13:37 by rpambo            #+#    #+#             */
/*   Updated: 2024/10/11 17:12:13 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon( std::string type );
		std::string getType( void ) const;
		void setType( std::string type );
};

#endif
