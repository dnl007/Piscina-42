/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 12:26:50 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/09 20:11:36 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive(int nb, int power, int result, int count)
{
	if (count < power)
	{
		count++;
		return (ft_recursive(nb, power, result *= nb, count));
	}
	return (result);
}

int		ft_recursive_power(int nb, int power)
{
	int result;
	int i;

	i = 0;
	if (power < 0)
		return (0);
	result = 1;
	return (ft_recursive(nb, power, result, i));
}
