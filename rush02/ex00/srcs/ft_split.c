/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:55:34 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/25 22:49:24 by murasakinx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_word_count(char *str, char *charset)
{
	int	i;
	int	word_count;
	int	in_word;

	i = 0;
	word_count = 0;
	in_word = 0;
	while (str[i])
	{
		if (!ft_in_charset(str[i], charset) && !in_word)
		{
			in_word = 1;
			word_count++;
		}
		else if (ft_in_charset(str[i], charset))
			in_word = 0;
		i++;
	}
	return (word_count);
}

char	*ft_strcpy(char *str, int start, int end)
{
	char	*result;
	int		i;

	i = 0;
	result = malloc(sizeof(char) * ((end - start) + 1));
	if (!result)
		return (NULL);
	while (start < end)
		result[i++] = str[start++];
	result[i] = '\0';
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		start;
	char	**result;

	result = malloc(sizeof(char *) * (ft_word_count(str, charset) + 1));
	i = 0;
	j = 0;
	if (!result)
		return (0);
	while (str[i])
	{
		if (!ft_in_charset(str[i], charset) && (i == 0
				|| ft_in_charset(str[i -1], charset)))
			start = i;
		if ((!ft_in_charset(str[i], charset)) && (!str[i +1]
				|| ft_in_charset(str[i +1], charset)))
			result[j++] = ft_strcpy(str, start, i +1);
		i++;
	}
	result[j] = (0);
	return (result);
}
