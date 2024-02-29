/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:13:07 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/27 19:15:35 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src, int len)
{
	int		i;
	char	*dest;

	dest = malloc(sizeof(char) * len +1);
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int			i;
	int			len;

	result = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		len = ft_strlen(av[i]);
		result[i].size = len;
		result[i].str = av[i];
		result[i].copy = ft_strdup(av[i], len);
		i++;
	}
	result[i].size = 0;
	result[i].str = 0;
	result[i].copy = 0;
	return (result);
}
/*
int	main(int ac, char **av)
{
	if (ac < 2)
		return (0);
	t_stock_str *var = ft_strs_to_tab(ac, av);
	int	i = 0;
	while (var[i].size != 0)
	{
		printf("%s\n", var[i].str);
		printf("%s\n", var[i].copy);
		printf("%d\n", var[i].size);
		i++;
	}
	return (0);
}
*/
