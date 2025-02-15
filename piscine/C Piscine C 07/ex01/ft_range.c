/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:22:56 by rpambo            #+#    #+#             */
/*   Updated: 2023/12/02 11:50:46 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*ret;
	int		i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	ret = malloc(sizeof(int) * (max - min));
	if (!(ret))
		return (NULL);
	while (min < max)
	{
		ret[i] = min;
		i++;
		min++;
	}
	return (ret);
}
