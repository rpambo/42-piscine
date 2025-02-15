/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 08:45:12 by rpambo            #+#    #+#             */
/*   Updated: 2023/11/26 08:46:18 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dst_size;
	unsigned int	src_size;
	unsigned int	result;

	dst_size = 0;
	while (dest[dst_size] != '\0')
		++dst_size;
	src_size = 0;
	while (src[src_size] != '\0')
		++src_size;
	result = src_size;
	if (size <= dst_size)
		result += size;
	else
		result += dst_size;
	src_size = 0;
	while (src[src_size] != '\0' && dst_size + 1 < size)
	{
		dest[dst_size] = src[src_size];
		dst_size++;
		src_size++;
	}
	dest[dst_size] = '\0';
	return (result);
}
