/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 12:18:20 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/04 15:39:28 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
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

int		ft_atoi(char *str)
{
	int result;
	int i;
	int operator;

	result = 0;
	i = 0;
	operator = 1;
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
	while (ft_number(str[i]))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * operator);
}
