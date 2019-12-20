/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 07:57:27 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/05 08:58:32 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int		main(void)
{
	char *str;
	int result;

	str = " ---+--+1234ab567";
	result = ft_atoi_base(str, "0123456789");
	printf("Resultado: %d\n", result);
	str = "234ab567";
	result = ft_atoi_base(str, "0123456789abcdef");
	printf("Resultado: %d\n", result);
}
