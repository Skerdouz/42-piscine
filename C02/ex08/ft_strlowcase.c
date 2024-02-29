/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:46:06 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/12 15:00:36 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	for(int i = 1; i < argc; i++)
	{
		printf("%s", ft_strlowcase(argv[i]));
	}
	return (0);
}
*/
