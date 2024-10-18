/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:48:17 by tchampio          #+#    #+#             */
/*   Updated: 2024/07/11 15:50:53 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*c;
	int		i;

	c = str;
	i = 0;
	while (*c)
	{
		i++;
		c++;
	}
	write(1, str, i);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

void	ft_sort_array(char **strings, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 1;
		while (j < size - 1 - i)
		{
			if (ft_strcmp(strings[j], strings[j + 1]) > 0)
				ft_swap(&strings[j], &strings[j + 1]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		ft_sort_array(argv, argc);
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putstr("\n");
			i++;
		}
	}
}
