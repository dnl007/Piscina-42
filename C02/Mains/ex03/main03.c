/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 12:48:19 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/02 08:42:37 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	int result;

	result = ft_str_is_numeric("abc");
	printf("abc - Result: %d\n", result);
	result = ft_str_is_numeric("abc123");
	printf("abc123 - Result: %d\n", result);
	result = ft_str_is_numeric("QWDS");
	printf("QWDS - Result: %d\n", result);
	result = ft_str_is_numeric("123");
	printf("123 - Result: %d\n", result);
	result = ft_str_is_numeric("éAÍ");
	printf("éAÍ - Result: %d\n", result);
}
