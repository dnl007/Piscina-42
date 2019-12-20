/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 11:54:56 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/02 08:14:59 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char		*ft_strncpy(char *dest, char *src, unsigned int n);

int			main(void)
{
	char *src;
	char dest[20];

	src = "Hello World!";
	printf("Original: %s\n", src);
	ft_strncpy(dest, src, 8);
	printf("Copia ft_strncpy: %s\n", dest);
	strncpy(dest, src, 8);
	printf("Copia strncpy: %s\n", dest);
	return (0);
}
