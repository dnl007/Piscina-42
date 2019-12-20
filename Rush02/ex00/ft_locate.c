/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_locate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 15:55:49 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/09 19:46:45 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include <string.h>
#include <stdio.h>

void	ft_split(char *loc)
{
	int i;

	i = 0;
	while (loc[i] != ':')
		i++;
	i++;
	while (loc[i] == ' ')
		i++;
	while (loc[i] != '\0')
	{
		ft_putchar(loc[i]);
		i++;
		if (loc[i] == ' ')
		{
			while (loc[i] == ' ')
				i++;
			ft_putchar(' ');
		}
	}
}

void	ft_unity(char *nbr, char *dict)
{
	int		i;
	char	*loc;

	loc = ft_strstr(dict, &nbr[0]);
	i = 0;
	while (loc[i + 1] != '\n')
		i++;
	if (loc[i + 1] == '\n')
		loc[i + 1] = '\0';
	ft_split(loc);
}

void	ft_unity_2_digits(char *nbr, char *dict, int size)
{
	char *frt;
	char *snd;
	char *res;

	frt = 0;
	snd = 0;
	res = 0;
	if (((nbr[0] == '1' && nbr[size - 1] <= '9') || (nbr[size - 1] == '0'
					&& nbr[0] <= '9')) || (size == 1))
	{
		ft_unity(nbr, dict);
	}
	else
	{
		ft_putchar(' ');
		ft_unity(snd, dict);
	}
}
