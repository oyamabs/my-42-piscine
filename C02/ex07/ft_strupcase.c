/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 06:15:39 by tchampio          #+#    #+#             */
/*   Updated: 2024/07/08 06:22:28 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*original_ptr;

	original_ptr = str;
	while (*str)
	{
		if (*str < 123 && *str > 96)
			*str -= 32;
		str++;
	}
	return (original_ptr);
}
