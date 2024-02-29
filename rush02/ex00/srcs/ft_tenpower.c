/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tenpower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murasakinx <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 22:45:10 by murasakinx        #+#    #+#             */
/*   Updated: 2024/02/25 22:47:17 by murasakinx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_ull	ft_tenpower(char *nb)
{
	t_ull	i;

	i = 0;
	if (nb[i] != '1' || nb[i + 1] != '0')
		return (0);
	while (nb[i + 1])
	{
		if (nb[i + 1] != '0')
			return (0);
		i++;
	}
	return (i);
}