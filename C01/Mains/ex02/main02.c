/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 07:44:41 by dnascime          #+#    #+#             */
/*   Updated: 2019/11/27 07:44:45 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_swap(int *a, int *b);

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int         main(void)
{
    int *a = 0;
    int *b = 0;
    int value1;
    int value2;

    value1 = 4;
    value2 = 2;
    a = &value1;
    b = &value2;
    ft_putchar(*a + '0');
    ft_putchar(' ');
    ft_putchar(*b + '0');    
    ft_swap(a, b);
    ft_putchar('\n');
    ft_putchar(*a + '0');
    ft_putchar(' ');
    ft_putchar(*b + '0'); 

}
