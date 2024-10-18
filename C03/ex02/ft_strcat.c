/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 08:50:44 by tchampio          #+#    #+#             */
/*   Updated: 2024/07/10 08:04:59 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcat(char *dest, char *src)
{
	int	size_of_dest;
	int	i;

	size_of_dest = ft_strlen(dest);
	i = 0;
	while (*src)
	{
		dest[size_of_dest + i] = *src;
		i++;
		src++;
	}
	dest[size_of_dest + i] = '\0';
	return (dest);
}
