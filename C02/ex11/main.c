/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 11:17:12 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/02 13:43:57 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_putstr_non_printable(char *str);

int		main(void)
{
	char str[] = "Oi \n voce esta \v bem \t ?";
	printf("Teste print sem função:\n%s", str);
	printf("\nTeste print da função:\n");
	ft_putstr_non_printable(str);
}
