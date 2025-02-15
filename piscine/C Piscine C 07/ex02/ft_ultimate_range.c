/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:51:46 by rpambo            #+#    #+#             */
/*   Updated: 2023/12/02 19:00:32 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*ret;
	int		i;

	i = 0;
	if (min >= max)
	{
		ret = NULL;
		return (0);
	}
	ret = malloc(sizeof(int) * (max - min));
	if (!(ret))
		return (-1);
	while (min < max)
	{
		ret[i] = min;
		i++;
		min++;
	}
	*range = ret;
	return (i);
}
