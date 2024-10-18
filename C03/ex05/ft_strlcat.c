/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:53:05 by tchampio          #+#    #+#             */
/*   Updated: 2024/07/09 06:45:49 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

void	ft_memcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;
	unsigned int	dest_size;

	i = 0;
	src_size = ft_strlen(src);
	dest_size = ft_strlen(dest);
	if (dest_size >= size)
		dest_size = size;
	if (dest_size == size)
		return (size + src_size);
	if (src_size < size - dest_size)
	{
		ft_memcpy(dest + dest_size, src, src_size + 1);
	}
	else
	{
		ft_memcpy(dest + dest_size, src, size - dest_size - 1);
		dest[size - 1] = '\0';
	}
	return (i);
}
