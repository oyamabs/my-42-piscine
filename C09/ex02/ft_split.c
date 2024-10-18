/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:55:13 by tchampio          #+#    #+#             */
/*   Updated: 2024/07/25 13:51:58 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_separator(char c, char *separators)
{
	while (*separators)
	{
		if (c == *separators)
			return (1);
		separators++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;

	i = 0;
	while (*str++)
	{
		if (is_separator(*(str + 1), charset) == 0
			&& is_separator(*str, charset) == 1)
			i++;
	}
	return (i + 1);
}

void	ft_strcpy(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (is_separator(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	copy_word(char **tab, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	j = 0;
	word = 0;
	while (str[i])
	{
		if (is_separator(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (is_separator(str[i + j], charset) == 0)
				j++;
			tab[word] = (char *)malloc(sizeof(**tab) * (j + 1));
			ft_strcpy(tab[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	int		num_words;
	char	**tab;

	num_words = count_words(str, charset);
	tab = (char **)malloc(sizeof(*tab) * (num_words + 1));
	tab[num_words] = 0;
	copy_word(tab, str, charset);
	return (tab);
}
