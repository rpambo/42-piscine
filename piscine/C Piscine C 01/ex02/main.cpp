/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:15:18 by rpambo            #+#    #+#             */
/*   Updated: 2024/10/11 15:39:54 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*PTR = &brain;
	std::string	&REF = brain;

	std::cout << "The memory address of the string variable (brain): " << &brain << std::endl;
	std::cout << "The memory address held by string PTR: " << PTR << std::endl;
	std::cout << "The memory address held by string REF: " << &REF << std::endl;
	std::cout << "-------------------------------------------------------------------------" << std::endl;
	std::cout << "The value of the string variable: " << brain << std::endl;
        std::cout << "The value pointed to by string PTR: " << *PTR << std::endl;
        std::cout << "The value pointed to by string REF: " << REF << std::endl;
	return (0);
}
