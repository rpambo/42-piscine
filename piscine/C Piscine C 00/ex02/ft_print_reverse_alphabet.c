/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:14:51 by rpambo            #+#    #+#             */
/*   Updated: 2023/11/17 13:24:11 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{	
	char	alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		write (1, &alpha, 1);
		alpha--;
	}
}
