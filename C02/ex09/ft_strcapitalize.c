/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:39:51 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/12 15:02:47 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_alphanum(char str)
{
	if (str >= 'a' && str <= 'z')
	{
		return (1);
	}
	if (str >= 'A' && str <= 'Z')
	{
		return (1);
	}
	if (str >= '0' && str <= '9')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (ft_is_alphanum(str[i]) && !(ft_is_alphanum(str[i -1])))
		{
			if (!(str[i] >= '0' && str[i] <= '9'))
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char string[] = "salut, 42mots quarante-deux";
	printf("%s", ft_strcapitalize(string));
	return (0);
}
*/
