/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:20:48 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/05 12:24:19 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	char	var1[6] = "stuff";
	char	var2[6] = "world!";
	int		result;

	result = ft_strlcpy(var1, var2, 0);
	printf("hello %s\n Tamanho: %d", var1, result);
	result = strlcpy(var1, var2, 0);
	printf("\nhello %s\n Tamanho: %d\n", var1, result);
} 
