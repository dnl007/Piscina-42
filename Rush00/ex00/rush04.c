/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 12:22:42 by dnascime          #+#    #+#             */
/*   Updated: 2019/11/24 17:41:23 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_print_line(char first, char mid, char last, int length)
{
	int column;

	column = length;
	while (column >= 1)
	{
		if (column == length)
			ft_putchar(first);
		else if (column == 1)
			ft_putchar(last);
		else
			ft_putchar(mid);
		column--;
	}
	ft_putchar('\n');
}

void		rush(int x, int y)
{
	int line;

	line = y;
	while (line >= 1 && x > 0)
	{
		if (line == y)
			ft_print_line('A', 'B', 'C', x);
		else if (line == 1)
			ft_print_line('C', 'B', 'A', x);
		else
			ft_print_line('B', ' ', 'B', x);
		line--;
	}
}
