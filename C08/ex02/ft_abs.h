/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:37:15 by tchampio          #+#    #+#             */
/*   Updated: 2024/07/18 08:14:10 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	else
		return (nbr);
}
# define ABS(nbr) abs(nbr)

#endif
