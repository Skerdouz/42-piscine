/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:14:41 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/12 15:03:36 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
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
		printf("%d", ft_str_is_alpha(argv[i]));
	}
	return (0);
}
*/
