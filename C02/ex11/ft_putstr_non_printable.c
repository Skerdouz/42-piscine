/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:37:30 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/13 15:49:51 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 

int	ft_str_is_printable(char str)
{
	if (str >= 32 && str <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_print_hexa(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (!(c == '\0'))
	{
		write(1, "\\", 1);
		write(1, &hex[c / 16], 1);
		write(1, &hex[c % 16], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_str_is_printable(str[i]))
		{
			write(1, &str[i], 1);
		}
		else
		{
			ft_print_hexa(str[i]);
		}
		i++;
	}
	ft_print_hexa(str[i]);
}
/*
int	main()
{
	char str5[] = "Inc\0lNul";
	ft_putstr_non_printable(str5);

	return (0);
}
*/
