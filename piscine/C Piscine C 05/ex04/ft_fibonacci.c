/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 08:07:33 by rpambo            #+#    #+#             */
/*   Updated: 2023/11/29 23:38:08 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	else
	{
		if (index == 1)
		{
			return (1);
		}
		else
		{
			return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
		}
	}
}
