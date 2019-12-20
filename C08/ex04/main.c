/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 09:01:31 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/12 11:19:04 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str  *ft_strs_to_tab(int ac, char **av);

int					main(int argc, char **argv)
{
	int i;
	struct s_stock_str  *structs;
	structs = ft_strs_to_tab(argc, argv);
	i = 1;
	while (i < argc)
	{
		printf("%d\n", i);
		printf("Original : %s |||  %p\n", structs[i].str, structs[i].str);
		printf("Copy : %s |||  %p\n", structs[i].copy, structs[i].copy);
		printf("Size : %d\n", structs[i].size);
		i++;
	}
}
