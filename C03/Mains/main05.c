/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdanelon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 10:37:03 by jdanelon          #+#    #+#             */
/*   Updated: 2019/12/04 09:08:44 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size);

int				main(void)
{
	char			in1[] = "String";
	char			out1[10] = "Bla";
	char			in2[] = "String";
	char			out2[10] = "Bla";
	unsigned	int	n;
	unsigned	int	len;
	
	n = 10;
	printf("As strings são '%s' e '%s'\n", out1, in1);
	len = ft_strlcat(out1, in1, n);
	printf("A string concatenada é '%s'\n", out1);
	printf("As duas strings possuem comprimento somado %d\n", len);
	printf("\n");
	printf("As strings são '%s' e '%s'\n", out2, in2);
	len = strlcat(out2, in2, n);
	printf("A string concatenada é '%s'\n", out2);
	printf("As duas strings possuem comprimento somado %d\n", len);
	return (0);
}
