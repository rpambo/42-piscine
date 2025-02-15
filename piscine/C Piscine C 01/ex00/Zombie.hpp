/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 08:26:14 by rpambo            #+#    #+#             */
/*   Updated: 2024/10/11 09:12:42 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie( std::string Name );
		~Zombie();
		void	 announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
