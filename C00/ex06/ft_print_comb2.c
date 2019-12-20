/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 11:12:42 by dnascime          #+#    #+#             */
/*   Updated: 2019/11/25 16:51:10 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putint(int n)
{
	int one;
	int two;

	if (n > 9)
	{
		one = n / 10;
		two = n % 10;
		ft_putchar(one + 48);
		ft_putchar(two + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(n + 48);
	}
}

void		ft_print_comb2(void)
{
	int d;
	int e;

	d = 0;
	while (d <= 99)
	{
		e = d + 1;
		while (e <= 99)
		{
			ft_putint(d);
			ft_putchar(' ');
			ft_putint(e);
			if (d < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			e++;
		}
		d++;
	}
}
