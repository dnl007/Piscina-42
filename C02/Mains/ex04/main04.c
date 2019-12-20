/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 12:48:19 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/02 08:53:56 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	int result;

	result = ft_str_is_lowercase("abc");
	printf("abc - Result: %d\n", result);
	result = ft_str_is_lowercase("QWDS");
	printf("QWDS - Result: %d\n", result);
}
