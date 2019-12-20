/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 13:51:02 by dnascime          #+#    #+#             */
/*   Updated: 2019/11/27 20:22:51 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void        ft_rev_int_tab(int *tab, int size);

int         main(void)
{
    int tab[4];
    int size;

    tab[0] = 1;
    tab[1] = 2;
    tab[2] = -3;
    tab[3] = 4;
    size = 4;
    printf("Ordem inicial: %d, %d, %d, %d \n", tab[0], tab[1], tab[2], tab[3]);
    ft_rev_int_tab(&tab[0], size);
    printf("Ordem inversa: %d, %d, %d, %d \n", tab[0], tab[1], tab[2], tab[3]);
    return (0);
}
