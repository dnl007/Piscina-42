/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 09:15:03 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/04 09:27:10 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	char *str1 = "Aqui tem 23 caracteres ";
	printf("String a ser contada: %s\n", str1);
	printf("strlen: %lu\n", strlen(str1));
	printf("ft_strlen: %d\n", ft_strlen(str1));
}
