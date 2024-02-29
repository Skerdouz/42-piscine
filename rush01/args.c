/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 11:09:33 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/18 18:05:53 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_args_validator(char *str, int dim)
{
	int	nb;
	int	i;

	nb = 0;
	i = 1;
	while (*str)
	{
		if (*str >= '1' && *str <= (dim + 48))
		{
			nb += 1;
			i -= 1;
		}
		else
			i += 1;
		if (i != 1 && i != 0)
			return (0);
		str++;
	}
	if (nb != dim * dim)
		return (0);
	return (1);
}

char	*ft_args_format(char *str, int dim)
{
	char	*result;
	int		i;

	i = 0;
	result = malloc(sizeof(char) * (dim * dim) + 1);
	while (*str)
	{
		if (*str >= '1' && *str <= (dim + 48))
			result[i++] = *str;
		str++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	char *str = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	if (ft_args_validator(str, 4) == 0)
	{
		printf("OUPS\n");
		return (1);
	}
	else
		str = ft_args_format(str, 4);
	printf("0: %s", str);
	return (0);
}
*/
