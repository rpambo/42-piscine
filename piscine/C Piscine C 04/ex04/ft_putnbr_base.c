/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:21:44 by rpambo            #+#    #+#             */
/*   Updated: 2023/11/27 23:25:18 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void	imprimir(int *nbr_final, char *base, int size_base, int c)
{
	int	base_8[9];
	int	i;

	i = 0;
	while (i <= 7)
	{
		base_8[i] = i;
		i++;
	}
	if (size_base == 8)
	{
		while (--c >= 0)
			ft_putchar(base_8[nbr_final[c]] + '0');
	}
	else
	{
		while (--c >= 0)
			ft_putchar(base[nbr_final[c]]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size_base;
	int	nbr_final[100];
	int	i;

	i = 0;
	size_base = 0;
	if (check_base(base))
	{
		while (base[size_base])
			size_base++;
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (nbr)
		{
			nbr_final[i++] = nbr % size_base;
			nbr = nbr / size_base;
		}
		imprimir(nbr_final, base, size_base, i);
	}
}
