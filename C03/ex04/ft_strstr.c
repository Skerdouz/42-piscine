/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:06:24 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/14 16:27:56 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;
	int		i;
	int		length;

	ptr = 0;
	i = 0;
	length = ft_strlen(to_find);
	if (length == 0)
		return (ptr);
	while (str[i])
	{
		if (ft_strncmp(&str[i], to_find, length) == 0)
		{
			ptr = &str[i];
			return (ptr);
		}
		i++;
	}
	return (ptr);
}
