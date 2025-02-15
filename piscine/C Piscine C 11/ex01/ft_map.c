/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:54:22 by rpambo            #+#    #+#             */
/*   Updated: 2023/12/07 21:54:22 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int lenght, int (*f)(int))
{
	int		i;
	int		*res;

	res = malloc(sizeof(int) * lenght);
	i = -1;
	while (++i < lenght)
		res[i] = (*f)(tab[i]);
	return (res);
}
