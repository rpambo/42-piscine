/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:40:47 by rpambo            #+#    #+#             */
/*   Updated: 2023/11/23 10:07:43 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(int a, int b, int c)
{
	if (a == '7' && b == '8' && c == '9')
	{
		return ;
	}
	write (1, ", ", 1);
	write (1, "  ", 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				putchar(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
