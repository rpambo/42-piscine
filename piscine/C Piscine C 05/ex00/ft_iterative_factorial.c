/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 00:45:03 by rpambo            #+#    #+#             */
/*   Updated: 2023/11/28 10:49:16 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
	{
		return (0);
	}
	factorial = 1;
	while (nb > 0)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}	
