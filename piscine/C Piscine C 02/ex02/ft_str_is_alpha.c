/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 07:18:53 by rpambo            #+#    #+#             */
/*   Updated: 2023/11/20 20:17:22 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	alfabet(char c)
{
	char	tr;

	tr = c;
	if ((tr >= 'A') && (tr <= 'Z'))
	{
		tr = ((tr - 'a') + 'A');
		return (1);
	}
	else if ((tr >= 'a') && (tr <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
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
			if (!(alfabet(str[i])))
			{
				return (0);
			}
			i++;
		}
		return (1);
	}
}
