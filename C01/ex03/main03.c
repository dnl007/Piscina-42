/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 08:57:03 by dnascime          #+#    #+#             */
/*   Updated: 2019/11/27 08:57:07 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void        ft_div_mod(int a, int b, int *div, int *mod);

int        main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 5;
    b = 2;
    printf("Divisao %d / %d", a, b);
    ft_div_mod(a, b, &div, &mod);
    printf("\nResultado da divisão %d\n", div);
    printf("Modulo %d ", mod);
    return(0);
}
