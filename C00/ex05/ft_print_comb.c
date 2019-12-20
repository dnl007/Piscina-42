/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 21:31:31 by dnascime          #+#    #+#             */
/*   Updated: 2019/11/25 16:41:33 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_print_comb(void)
{
	char d;
	char e;
	char f;

	d = '0';
	while (d <= '9')
	{
		e = d + 1;
		while (e <= '9')
		{
			f = e + 1;
			while (f <= '9')
			{
				ft_putchar(d);
				ft_putchar(e);
				ft_putchar(f);
				if ((d != '7') || (e != '8') || (f != '9'))
					write(1, ", ", 2);
				f++;
			}
			e++;
		}
		d++;
	}
}
