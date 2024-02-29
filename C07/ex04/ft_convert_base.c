/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:31:31 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/29 17:48:39 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_base_is_valid(char *base);
int	ft_atoi_base(char *str, char *base_from);

char	*ft_uno_revert(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
	return (str);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int		base_len;
	int		i;
	int		neg;
	char	*result;

	i = 0;
	base_len = ft_strlen(base);
	result = malloc(5000);
	if (!result)
		return (0);
	neg = 1;
	if (nbr < 0)
		neg = -1;
	if (nbr == 0)
		result[i++] = base[0];
	while (nbr)
	{
		result[i++] = base[(nbr % base_len) * neg];
		nbr = nbr / base_len;
	}
	if (neg == -1)
		result[i++] = '-';
	result [i] = '\0';
	return (ft_uno_revert(result));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	result;

	if ((!nbr) || (!base_from) || (!base_to))
		return (0);
	if (!ft_base_is_valid(base_from) || !ft_base_is_valid(base_to))
		return (0);
	result = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(result, base_to));
}
/*
#include <stdio.h>
int	main()
{
	char	*yup;
	yup = ft_convert_base("0", "0123456789abcdef", "abcdefghijklmnopqrstuvwxyz");
	printf("%s", yup);
	free(yup);
	return (0);
}
*/
