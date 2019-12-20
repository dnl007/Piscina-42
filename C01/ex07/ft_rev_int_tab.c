/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 13:52:48 by dnascime          #+#    #+#             */
/*   Updated: 2019/11/27 18:53:27 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int value;

	i = 0;
	size--;
	while (i <= size)
	{
		value = tab[i];
		tab[i] = tab[size];
		tab[size] = value;
		i++;
		size--;
	}
}
