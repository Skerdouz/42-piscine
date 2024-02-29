/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:54:57 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/25 22:15:09 by murasakinx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_dict
{
	char	*key;
	char	*value;
}	t_dict;

typedef unsigned long long	t_ull;

char	ft_getnum(char *nb, char *nb2, t_ull i, int *retenue);
char	*ft_get_value(t_dict *dict, char *nb);
char	*ft_read_file(char *filename);
char	*ft_realloc(char *old, char *buf);
char	*ft_rmuselesszeros(char *nb);
char	*ft_strcpy(char *str, int start, int end);
char	*ft_strdup(char *str);
char	*ft_subintstr(char *nb, char *nb2);
char	**ft_split(char *str, char *charset);
int		ft_in_charset(char c, char *charset);
int		ft_intstrcmp(char *nb, char *nb2);
int		ft_word_count(char *str, char *charset);
t_dict	*ft_init_dict(char **values);
t_ull	ft_intstrlen(char *nb);
t_ull	ft_tenpower(char *nb);
void	ft_freedom(t_dict *dict, char *content, char **result);
void	ft_getkey(char *value, int *start, int *x);
void	ft_getvalue(char *value, int *start, int *x);
void	ft_managenbr(t_dict *dict, char *nb, t_ull i, t_ull p10);
void	ft_putdicterror(void);
void	ft_puterror(void);
void	ft_putnbr(t_dict *dict, char *nb);
void	ft_putstr(char *str);
#endif
