/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:00:49 by tchampio          #+#    #+#             */
/*   Updated: 2024/07/17 10:24:04 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	count;

	count = 0;
	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}

int	total_size(int size, char **strs)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	return (total);
}

char	*create_tab(int size, char **strs, char *sep)
{
	int		totalsize;
	int		separator_size;
	char	*tab;

	totalsize = total_size(size, strs);
	separator_size = ft_strlen(sep);
	tab = (char *)malloc(sizeof(*tab) * (totalsize + separator_size) + 1);
	if (tab == NULL)
		return (NULL);
	return (tab);
}

void	ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = ft_strlen(dest);
	i = 0;
	while (i < ft_strlen(src))
	{
		dest[len + i] = src[i];
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;

	if (size == 0)
	{
		tab = (char *)malloc(1);
		return (tab);
	}
	tab = create_tab(size, strs, sep);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if ((i < size - 1))
			ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}
