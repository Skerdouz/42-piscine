/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:54:39 by mel-habi          #+#    #+#             */
/*   Updated: 2024/02/25 22:39:17 by murasakinx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_ull	ft_intstrlen(char *nb)
{
	t_ull	i;

	i = 0;
	while (nb[i])
		i++;
	return (i);
}

int	ft_intstrcmp(char *nb, char *nb2)
{
	t_ull	len;
	t_ull	len2;
	t_ull	i;

	len = ft_intstrlen(nb);
	len2 = ft_intstrlen(nb2);
	i = 0;
	if (len > len2)
		return (1);
	else if (len < len2)
		return (-1);
	while (nb[i])
	{
		if (nb[i] > nb2[i])
			return (1);
		else if (nb[i] < nb2[i])
			return (-1);
		i++;
	}
	return (0);
}

char	ft_getnum(char *nb, char *nb2, t_ull i, int *retenue)
{
	t_ull	pos;
	t_ull	pos2;
	char	c;

	if (ft_intstrcmp(nb, nb2) == -1)
		return ('0');
	pos = ft_intstrlen(nb) - i - 1;
	pos2 = ft_intstrlen(nb2) - i - 1;
	if (pos2 < pos2 + i + 1)
		c = nb2[pos2];
	else
		c = '0';
	if (nb[pos] < c + *retenue)
	{
		c = '0' + 10 + nb[pos] - (c + *retenue);
		*retenue = 1;
	}
	else
	{
		c = '0' + nb[pos] - (c + *retenue);
		*retenue = 0;
	}
	return (c);
}

char	*ft_rmuselesszeros(char *nb)
{
	t_ull	i;
	char	*filtered;

	i = 0;
	while (nb[i] == '0')
		i++;
	if (i == ft_intstrlen(nb))
	{
		filtered = malloc(sizeof(char) * 2);
		if (!filtered)
			return (nb);
		free(nb);
		filtered[0] = '0';
		filtered[1] = '\0';
	}
	else
	{
		filtered = ft_strdup(nb + i);
		if (!filtered)
			return (nb);
		free(nb);
	}
	return (filtered);
}

char	*ft_subintstr(char *nb, char *nb2)
{
	t_ull				i;
	int					retenue;
	char				*copy;

	i = 0;
	retenue = 0;
	copy = ft_strdup(nb);
	if (!copy)
		return (NULL);
	while (nb[i])
	{
		copy[ft_intstrlen(nb) - i - 1] = ft_getnum(nb, nb2, i, &retenue);
		i++;
	}
	return (ft_rmuselesszeros(copy));
}
