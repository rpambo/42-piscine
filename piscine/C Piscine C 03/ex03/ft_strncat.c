/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 02:46:02 by rpambo            #+#    #+#             */
/*   Updated: 2023/11/20 22:21:08 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	i = 0;
	while ((src[i] != '\0') && (i < nb))
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
