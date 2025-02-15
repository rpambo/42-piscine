/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:33:46 by rpambo            #+#    #+#             */
/*   Updated: 2023/11/23 09:35:10 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	num;

	if (n >= 0)
	{
		num = 'P';
		write (1, &num, 1);
	}
	else if (n < 0)
	{
		num = 'N';
		write (1, &num, 1);
	}
}
