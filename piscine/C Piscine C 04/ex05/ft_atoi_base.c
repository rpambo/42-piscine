/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:22:32 by rpambo            #+#    #+#             */
/*   Updated: 2023/11/27 23:24:32 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
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

int	imprimir(char *base, char *str, int i)
{
	int	digit_value;
	int	j;
	int	base_length;
	int	result;

	result = 0;
	base_length = 0;
	while (base[base_length])
		base_length++;
	while (str[i] != '\0' && str[i] != '+' && str[i] != '-')
	{
		digit_value = 0;
		j = 0;
		while (base[j] != '\0' && base[j] != str[i])
		{
			digit_value++;
			j++;
		}
		if (base[j] == '\0')
			return (0);
		result = result * base_length + digit_value;
		i++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sinal;
	int	result;

	result = 0;
	if (check_base(base))
	{
		i = 0;
		sinal = 0;
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		{
			i++;
		}
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sinal++;
			i++;
		}
		result = imprimir (base, str, i);
		if (sinal % 2 == 1)
			result *= -1;
	}
	return (result);
}
