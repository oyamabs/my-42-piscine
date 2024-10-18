/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 06:23:41 by tchampio          #+#    #+#             */
/*   Updated: 2024/07/08 06:29:04 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*original_ptr;

	original_ptr = str;
	while (*str)
	{
		if (*str < 91 && *str > 64)
			*str += 32;
		str++;
	}
	return (original_ptr);
}
