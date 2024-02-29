/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:38:08 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/25 22:52:01 by murasakinx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_freedom(t_dict *dict, char *content, char **result)
{
	int		i;

	i = 0;
	while (result[i])
		free(result[i++]);
	i = 0;
	while (dict[i].key)
	{
		free(dict[i].key);
		free(dict[i++].value);
	}
	free(result);
	free(content);
	free(dict);
}

int	main(int ac, char **av)
{
	char	*content;
	t_dict	*dict;
	char	**result;

	if (ac < 2)
	{
		ft_puterror();
		return (1);
	}
	if (ac == 2)
		content = ft_read_file("dictionnaries/numbers.dict");
	else
		content = ft_read_file(av[1]);
	result = ft_split(content, "\n");
	dict = ft_init_dict(result);
	if (!dict)
		return (1);
	ft_putnbr(dict, av[1]);
	ft_freedom(dict, content, result);
	return (0);
}
