/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:34:29 by tchampio          #+#    #+#             */
/*   Updated: 2024/07/03 14:42:50 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;
	int		i;

	i = 25;
	while (i >= 0)
	{
		c = 'a' + i;
		write(1, &c, 1);
		i--;
	}
}
