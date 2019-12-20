/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 09:39:06 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/04 12:12:41 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_putnbr(int nb);

int		main(void)
{
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(-42);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(+2147483647);
	printf("\n");
	ft_putnbr(4224);
}
