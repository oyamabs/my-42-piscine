/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:52:02 by tchampio          #+#    #+#             */
/*   Updated: 2024/07/11 15:49:27 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *c)
{
	int		len;
	char	*str;

	len = 0;
	str = c;
	while (*str)
	{
		str++;
		len++;
	}
	write(1, c, len);
}

int	main(int argc, char **argv)
{
	if (argc > 0)
		ft_putstr(argv[0]);
	ft_putstr("\n");
	return (0);
}
