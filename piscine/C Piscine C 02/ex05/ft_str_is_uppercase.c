/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:15:31 by rpambo            #+#    #+#             */
/*   Updated: 2023/11/19 15:50:00 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_upper(char a)
{
	if (a >= 'A' && a <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_upper(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
