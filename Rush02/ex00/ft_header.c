/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 11:25:58 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/08 21:58:58 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_strlen(char *str);
int		ft_open_file(char *path);
int		ft_close_file(int f);
int		ft_atoi(char *str);
int		ft_read_file(int fd, char *dict, int length);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strcmp(char *s1, char s2);
char	*ft_strcat(char *dest, char *src);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_free_dict(char *dict);
void	ft_unity(char *nbr, char *dict);
void	ft_unity_2_digits(char *nbr, char *dict, int size);
