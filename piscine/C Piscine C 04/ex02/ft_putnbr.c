/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                               +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 03:02:54 by rpambo            #+#    #+#             */
/*   Updated: 2023/11/27 22:08:22 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	imprimir(int *nbm, int i, int nb)
{
	while (nb > 0)
	{
		nbm[i++] = nb % 10;
		nb = nb / 10;
	}
	while (--i >= 0)
		ft_putchar(nbm[i] + '0');
}

void	ft_putnbr(int nb)
{
	int	nbm[32];
	int	i;

	i = 0;
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		imprimir(nbm, i, nb);
	}
	else
	{
		ft_putchar(nb + '0');
	}	
}
