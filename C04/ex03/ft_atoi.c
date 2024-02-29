/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 08:06:52 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/16 10:50:43 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	minus_counter;
	int	number;

	minus_counter = 0;
	number = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus_counter++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10;
		number += *str - '0';
		str++;
	}
	if (minus_counter % 2)
		return (-number);
	else
		return (number);
}
/*
#include <stdio.h>
int	main()
{
	char *c = "   ---+--+1234ab567";
	printf("%d", ft_atoi(c));
	return (0);
}
*/
