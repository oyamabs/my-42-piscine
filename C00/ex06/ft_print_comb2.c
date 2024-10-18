/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 08:46:21 by tchampio          #+#    #+#             */
/*   Updated: 2024/07/04 12:21:16 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_num(int num1, int num2)
{
	ft_putchar(num1 / 10 + '0');
	ft_putchar(num1 % 10 + '0');
	ft_putchar(' ');
	ft_putchar(num2 / 10 + '0');
	ft_putchar(num2 % 10 + '0');
	if (num1 < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= 98)
	{
		while (j <= 99)
		{
			if (i != j)
				ft_print_num(i, j);
			j++;
		}
		j = i + 1;
		i++;
	}
}
