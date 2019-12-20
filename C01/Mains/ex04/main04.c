/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 09:52:07 by dnascime          #+#    #+#             */
/*   Updated: 2019/11/27 09:52:09 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void        ft_ultimate_div_mod(int *a, int *b);

int         main(void)
{
    int a;
    int b;

    a = 5;
    b = 2;

    printf("Divisao %d / %d", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("\nResultado da divisão %d\n", a);
    printf("Modulo %d ", b);
    return(0);
}
