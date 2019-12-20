/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 15:48:35 by dnascime          #+#    #+#             */
/*   Updated: 2019/11/27 20:20:11 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void        ft_sort_int_tab(int *tab, int size);

int         main(void)
{
    int tab[4];
    int size;

    tab[0] = -1;
    tab[1] = 2;
    tab[2] = 1;
    tab[3] = 3;
    size = 4;
    printf("Ordem inicial: %d, %d, %d, %d \n", tab[0], tab[1], tab[2], tab[3]);
    ft_sort_int_tab(&tab[0], size);
    printf("Ordem crescente: %d, %d, %d, %d \n", tab[0], tab[1], tab[2], tab[3]);
    return (0);
}
