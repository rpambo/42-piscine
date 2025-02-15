/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:03:51 by rpambo            #+#    #+#             */
/*   Updated: 2023/11/28 10:36:36 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (1)
	{
		if (str1[i] != str2[i])
		{
			break ;
		}
		i++;
	}
	return (str1[i] - str2[i]);
}

void	ft_print_args(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

void	imprimir(int i, int j, int argc, char **argv)
{
	char	*arg;

	i = 1;
	while (i < argc)
	{
		j = i;
		while (ft_strcmp(argv[j], argv[j - 1]) < 0 && j > 1)
		{
			arg = argv[j - 1];
			argv[j - 1] = argv[j];
			argv[j] = arg;
			j--;
		}
		i++;
	}
	ft_print_args(argc, argv);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	imprimir(i, j, argc, argv);
	return (0);
}
