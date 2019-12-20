/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 15:19:29 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/02 09:05:23 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	int result;

	result = ft_str_is_printable("ABDEr452#$r\n\0");
	printf("ABDEr452#$r Result: %d\n", result);
	result = ft_str_is_printable("1234567890");
	printf("12345678890 - Result: %d\n", result);
	result = ft_str_is_printable("abcd!@#$%&*");
	printf("abcd!@ - Result: %d\n", result);
}
