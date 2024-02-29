/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:57:25 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/25 22:41:16 by murasakinx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_realloc(char *old, char *buf)
{
	char	*new;
	long	i;
	long	j;
	long	old_len;
	long	buf_len;

	j = 0;
	i = 0;
	old_len = ft_intstrlen(old);
	buf_len = ft_intstrlen(buf);
	new = malloc(old_len + buf_len + 1);
	if (!new)
		return (NULL);
	while (i < old_len)
		new[j++] = old[i++];
	free(old);
	i = 0;
	while (i < buf_len)
		new[j++] = buf[i++];
	new[j] = '\0';
	return (new);
}

char	*ft_read_file(char *filename)
{
	char	*content;
	char	buf[4097];
	int		bytesread;
	int		file;

	content = malloc(1 * sizeof(char));
	if (!content)
		return (NULL);
	content[0] = '\0';
	file = open(filename, O_RDONLY);
	if (file < 0)
		return (NULL);
	bytesread = read(file, buf, 4096);
	while (bytesread > 0)
	{
		buf[bytesread] = '\0';
		content = ft_realloc(content, buf);
		bytesread = read(file, buf, 4096);
	}
	return (content);
}

void	ft_getkey(char *value, int *start, int *x)
{
	*x = 0;
	while (value[*x] == ' ')
		*x = *x + 1;
	*start = *x;
	while (value[*x] >= '0' && value[*x] <= '9')
		*x = *x + 1;
}

void	ft_getvalue(char *value, int *start, int *x)
{
	while (value[*x] == ':' || value[*x] == ' ')
		*x = *x + 1;
	*start = *x;
	while ((value[*x] >= 'a' && value[*x] <= 'z')
		|| value[*x] == '-')
		*x = *x + 1;
}

t_dict	*ft_init_dict(char **values)
{
	t_dict	*dict;
	int		i;
	int		x;
	int		start;

	i = 0;
	x = 0;
	dict = malloc(sizeof(t_dict) * 1000);
	if (!dict)
		return (NULL);
	while (values[i])
	{
		ft_getkey(values[i], &start, &x);
		dict[i].key = ft_rmuselesszeros(ft_strcpy(values[i], start, x));
		ft_getvalue(values[i], &start, &x);
		dict[i].value = ft_strcpy(values[i], start, x);
		i++;
	}
	return (dict);
}
