/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 07:57:26 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/05 11:20:48 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_operator(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int		ft_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\v' || c == '\t'
			|| c == '\f' || c == '\r')
		return (1);
	return (0);
}

int		valid_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' ||
				base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_atoi_base(char *str, char *base)
{
	int result;
	int i;
	int operator;
	int size;

	result = 0;
	i = 0;
	operator = 1;
	size = ft_strlen(base);
	if (valid_base(base))
	{
		while (ft_space(str[i]))
			i++;
		while (ft_operator(str[i]))
		{
			if (str[i] == '-')
				operator *= -1;
			else
				operator *= 1;
			i++;
		}
	}
	return (result * operator);
}
