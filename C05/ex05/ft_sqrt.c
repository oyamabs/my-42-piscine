/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 06:11:54 by tchampio          #+#    #+#             */
/*   Updated: 2024/07/11 13:33:35 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	square;

	square = 1;
	while (square * square < nb)
	{
		square++;
	}
	if (square * square == nb)
		return (square);
	else
		return (0);
}
