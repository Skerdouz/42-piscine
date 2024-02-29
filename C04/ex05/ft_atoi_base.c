/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:05:35 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/14 10:38:39 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_is_negative(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if (str[i] == '-')
			nb += 1;
		i++;
	}
	if (nb % 2 == 0)
		return (0);
	else
		return (1);
}

int	ft_double_check(char *pt_base)
{
	int	i;
	int	j;

	i = 0;
	while (*(pt_base + i))
	{
		j = i + 1;
		while (*(pt_base + j))
		{
			if ((*pt_base + i) == (*pt_base + j))
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_get_base_value(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (i);
}
// Atoi convert string de base base_value -> int base 10
int	ft_convert(char *str, char *base, int base_value)
{
	int	i;
	int	nb;

	i = 0;
	while (str[i])
	{

		i++;
	}

}

int	ft_atoi_base(char *str, char *base)
{
	int	base_value;

	base_value = ft_get_base_value(base);
	if (base_value < 2)
	{
		return (0);
	}
	if (ft_double_check(base))
	{
		return (0);
	}
	return (ft_convert(str, base, base_value));
}
/*
int	main()
{
	printf("%s", ft_atoi_base("42", "0123456789abcdef"));
	return (0);
}
*/
