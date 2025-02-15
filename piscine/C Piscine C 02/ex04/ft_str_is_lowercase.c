/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:04:12 by rpambo            #+#    #+#             */
/*   Updated: 2023/11/19 15:53:33 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_alph(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	else
	{
		while (str[i] != '\0')
		{
			if (!(check_alph(str[i])))
			{
				return (0);
			}
			i++;
		}
		return (1);
	}
}
