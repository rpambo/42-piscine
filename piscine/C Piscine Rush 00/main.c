/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:36:29 by rpambo            #+#    #+#             */
/*   Updated: 2023/11/26 14:15:56 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "functions2.h"

int	solve(int tab[4][4], int entry[16], int pos)
{	
	int	size;

	if (pos == 16)
		return (1);
	size = 0;
	while (++size <= 4)
	{
		if (check_double(tab, pos, size) == 0)
		{
			tab[pos / 4][pos % 4] = size;
			if (check_case(tab, pos, entry) == 0)
			{
				if (solve(tab, entry, pos + 1) == 1)
					return (1);
			}
			else
				tab[pos / 4][pos % 4] = 0;
		}
	}
	return (0);
}

void	display_solution(int tab[4][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putnbr(tab[i][j]);
			if (j < 3)
			{
				ft_putchar(' ');
			}
		}
		ft_putchar('\n');
	}
}

int	main(int ac, char **av)
{
	int	tab[4][4];
	int	*entry;
	int	i;
	int	j;

	i = 0;
	while (i >= 3)
	{
		j = 0;
		while (j >= 3)
		{
			tab[i][j] = 0;
		}
	}
	if (check(ac, av) == 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	entry = get_numbers(av[1]);
	if (solve(tab, entry, 0) == 1)
		display_solution(tab);
	else
		ft_putstr("Error\n");
	return (0);
}
