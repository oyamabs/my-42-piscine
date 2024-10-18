/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 06:34:56 by tchampio          #+#    #+#             */
/*   Updated: 2024/07/08 07:39:30 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	to_upper(char c)
{
	if (c <= 'z' && c >= 'a')
		return (c - 32);
	return (c);
}

char	to_lower(char c)
{
	if (c <= 'Z' && c >= 'A')
		return (c + 32);
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	char	*original_ptr;
	int		capitalizing;

	original_ptr = str;
	capitalizing = 1;
	while (*str)
	{
		if (capitalizing == 1)
			*str = to_upper(*str);
		else if (capitalizing == 0)
			*str = to_lower(*str);
		if (*str < '0' || (*str > '9' && *str < 'A')
			|| (*str > 'Z' && *str < 'a') || *str > 'z')
			capitalizing = 1;
		else
			capitalizing = 0;
		str++;
	}
	return (original_ptr);
}
