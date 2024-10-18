/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 09:00:47 by tchampio          #+#    #+#             */
/*   Updated: 2024/07/09 06:44:06 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				size_of_dest;

	size_of_dest = ft_strlen(dest);
	i = 0;
	while (*src && i < nb)
	{
		dest[size_of_dest + i] = *src;
		i++;
		src++;
	}
	dest[size_of_dest + i] = '\0';
	return (dest);
}
