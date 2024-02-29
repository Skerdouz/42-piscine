/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:15:01 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/25 22:42:42 by murasakinx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_get_value(t_dict *dict, char *nb)
{
	int	i;

	i = 0;
	while (dict[i].key[0])
	{
		if (ft_intstrcmp(dict[i].key, nb) == 0)
			return (dict[i].value);
		i++;
	}
	return (0);
}
