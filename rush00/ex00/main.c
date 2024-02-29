/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:56:59 by habouda           #+#    #+#             */
/*   Updated: 2024/02/11 17:53:49 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	rush(int *x, int *y);

int	ft_str_to_int(char *str)
{
	int	nbr;
	int	i;

	nbr = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			nbr = nbr * 10 + (str[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (nbr);
}

int	ft_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == '-')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int	ft_is_negative(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			nb = nb +1;
		}
		i++;
	}
	if (nb % 2 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	if (argc != 3)
		return (-1);
	if (ft_is_numeric(argv[1]) && ft_is_numeric(argv[2]))
	{
		a = ft_str_to_int(argv[1]);
		b = ft_str_to_int(argv[2]);
		if (ft_is_negative(argv[1]))
			a = -a;
		if (ft_is_negative(argv[2]))
			b = -b;
	}
	else
		return (-1);
	rush(&a, &b);
	return (0);
}
