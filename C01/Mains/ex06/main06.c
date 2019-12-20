/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 12:54:23 by dnascime          #+#    #+#             */
/*   Updated: 2019/11/27 19:11:01 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int         ft_strlen(char *str);

int         main(void)
{ 
	int     i;
    char str[6];

    str[0] = 'D';
    str[1] = 'a';
    str[2] = 'N';
    str[3] = 'i';
    str[4] = 'E';
    str[5] = 'l';
    i = 0;
    i = ft_strlen(str);
    printf("Tamanho: %d", i);
    return (0);
}
