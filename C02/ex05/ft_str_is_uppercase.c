/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 10:29:20 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/10 17:25:18 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
		printf("%s, %s", argv[i], " | ");
		printf("%d", ft_str_is_uppercase(argv[i]));
	}
	return (0);
}
*/
