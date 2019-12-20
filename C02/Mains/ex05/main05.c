/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 14:40:38 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/02 09:00:39 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	int result;

	result = ft_str_is_uppercase("abc");
	printf("abc - Result: %d\n", result);
	result = ft_str_is_uppercase("ABC");
	printf("ABC - Result: %d\n", result);
}
