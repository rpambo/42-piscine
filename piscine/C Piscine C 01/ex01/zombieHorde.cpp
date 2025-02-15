/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:08:25 by rpambo            #+#    #+#             */
/*   Updated: 2024/10/11 14:00:27 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{	
	int num = 0;
	Zombie *horde;
	
	horde = new Zombie[N];

	while (num < N)
	{
		new (&horde[num]) Zombie(name);
		num++;
	}
	return (horde);
}
