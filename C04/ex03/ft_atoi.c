/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:45:59 by tchampio          #+#    #+#             */
/*   Updated: 2024/07/10 09:37:04 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\r')
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (1);
	return (0);
}

int	ft_is_negative(char *str, int *negative)
{
	int	offset;

	offset = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '+')
			*negative -= 1;
		else
			*negative += 1;
		str++;
		offset++;
	}
	return (offset);
}

int	ft_atoi(char *str)
{
	int	i;
	int	negative;

	i = 0;
	negative = 0;
	while (ft_isspace(*str))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '+')
			negative--;
		else
			negative++;
		str++;
	}
	while (ft_isdigit(*str) == 0)
	{
		i = 10 * i + (*str++ - '0');
	}
	if (negative % 2 == 0)
		return (i);
	else
		return (-i);
}
