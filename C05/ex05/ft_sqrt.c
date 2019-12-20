/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 17:00:54 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/09 20:18:05 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	unsigned int	sq;
	unsigned int	i;

	i = 0;
	sq = 0;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (nb);
	while (sq < (unsigned int)nb)
	{
		sq = i * i;
		i++;
	}
	i--;
	if (i * i == (unsigned int)nb)
		return (i);
	else
		return (0);
}
