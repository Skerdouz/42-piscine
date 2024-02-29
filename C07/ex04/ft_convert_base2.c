/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:27:48 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/26 20:16:07 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_base_is_valid(char *base)
{
	int	i;
	int	j;
	int	base_len;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return (0);
	i = 0;
	while (i < base_len)
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] <= ' ')
			return (0);
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_base_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	result;
	int	neg;

	result = 0;
	neg = 1;
	base_len = ft_strlen(base);
	if (!ft_base_is_valid(base))
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (ft_base_value(*str, base) != -1)
	{
		result = (result * base_len) + ft_base_value(*str, base);
		str++;
	}
	return (result * neg);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_atoi_base("a5b", "0123456879abcdef"));
	return (0);
}

*/
