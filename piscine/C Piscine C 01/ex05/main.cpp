/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 10:53:15 by rpambo            #+#    #+#             */
/*   Updated: 2024/10/12 11:09:27 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl harl;
	std::string option;

	std::cout << "choose one of the Harls :";
	getline(std::cin, option);
	harl.complain(option);
	return (0);
}
