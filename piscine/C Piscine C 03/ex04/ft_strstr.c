/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 03:53:27 by rpambo            #+#    #+#             */
/*   Updated: 2023/11/26 08:15:46 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned char	i;
	unsigned char	j;

	if (*to_find == '\0')
	{
		return (str);
	}
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			j = 0;
			while (str[i + j] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
				{
					return (str + i);
				}
				j++;
			}
			i++;
		}
	}
	return (0);
}
