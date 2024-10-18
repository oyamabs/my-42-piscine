/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 07:42:53 by tchampio          #+#    #+#             */
/*   Updated: 2024/07/12 10:43:33 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		src++;
		i++;
	}
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*new_string;

	src_len = ft_strlen(src);
	new_string = NULL;
	new_string = (char *)malloc(src_len + 1);
	ft_strcpy(new_string, src);
	return (new_string);
}
