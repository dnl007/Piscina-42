/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 12:17:05 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/04 15:37:52 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str);

int		main(void)
{
	char *str;
	int result;

	str = " ---+--+1234ab567";
	result = ft_atoi(str);
	printf("Resultado: %d\n", result);
	str = "234ab567";
	result = ft_atoi(str);
	printf("Resultado: %d\n", result);
}
