/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:54:58 by tchampio          #+#    #+#             */
/*   Updated: 2024/07/04 14:00:02 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define MAX_INT 2147483647
#define MIN_INT -2147483648

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	handle_negative(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	int	figures[25];
	int	i;

	nb = handle_negative(nb);
	i = 0;
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	while (nb != 0)
	{
		figures[i] = nb % 10;
		nb /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar('0' + figures[i]);
		i--;
	}
}
