/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdanelon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 18:08:49 by jdanelon          #+#    #+#             */
/*   Updated: 2019/12/03 11:43:04 by jdanelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char in1[] = "String";
	char out1[10] = "Bla";
	char in2[] = "String";
	char out2[10] = "Bla";

	printf("As strings são '%s' e '%s'\n", in1, out1);
	ft_strcat(out1, in1);
	printf("A string concatenada é '%s'\n", out1);
	printf("\n");
	printf("As strings são '%s' e '%s'\n", in2, out2);
	strcat(out2, in2);
	printf("A string concatenada é '%s'\n", out2);
	return (0);
}
