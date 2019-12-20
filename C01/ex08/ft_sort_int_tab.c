/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 15:55:11 by dnascime          #+#    #+#             */
/*   Updated: 2019/11/27 19:05:50 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_sort_int_tab(int *tab, int size)
{
	int i;
	int value;

	i = 0;
	--size;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			value = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = value;
			i = 0;
		}
		else
			i++;
	}
}
