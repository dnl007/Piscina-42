/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdanelon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 09:05:08 by jdanelon          #+#    #+#             */
/*   Updated: 2019/12/04 15:51:40 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char			in1[] = "String";
	char			out1[10] = "Bla";
	char			in2[] = "String";
	char			out2[10] = "Bla";
	unsigned	int	n;

	n = 4;
	printf("As strings são '%s' e '%s'\n", out1, in1);
	ft_strncat(out1, in1, n);
	printf("A string concatenada com %d caracteres é '%s'\n", n, out1);
	printf("\n");
	printf("As strings são '%s' e '%s'\n", out2, in2);
	strncat(out2, in2, n);
	printf("A string concatenada com %d caracteres é '%s'\n", n, out2);
	return (0);
}
