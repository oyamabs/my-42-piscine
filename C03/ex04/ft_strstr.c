/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 09:28:34 by tchampio          #+#    #+#             */
/*   Updated: 2024/07/10 09:09:25 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 != '\0' || *s2 != '\0') && i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}

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

char	*ft_strstr(char *str, char *to_find)
{
	char	*occur;
	int		find_len;
	int		found;

	occur = NULL;
	find_len = ft_strlen(to_find);
	found = 0;
	while (*str != '\0' && found == 0)
	{
		if (ft_strncmp(str, to_find, find_len) == 0)
		{
			occur = str;
			found = 1;
		}
		str++;
	}
	return (occur);
}
