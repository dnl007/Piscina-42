/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 10:57:28 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/02 15:28:58 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char *src;
	char dest[13];

	src = "Hello World!";
	printf("Original: %s\n", src);
	ft_strcpy(dest, src);
	printf("ft_strcpy: %s \n", dest);
	strcpy(dest, src);
	printf("strcpy: %s \n", dest);
	return (0);
}
