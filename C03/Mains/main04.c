/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdanelon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 09:20:39 by jdanelon          #+#    #+#             */
/*   Updated: 2019/12/04 08:26:52 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char	in1[] = "This is a simple string";
	char	pattern1[] = "simple";
	char	in2[] = "This is a simple string";
	char	pattern2[] = "simple";
	char	*res;

	printf("A string é '%s' e a string a ser achada, '%s'\n", in1, pattern1);
	res = ft_strstr(in1, pattern1);
	printf("A string achada '%s'\n", res);
	printf("\n");
	printf("A string é '%s' e a string a ser achada, '%s'\n", in2, pattern2);
	res = strstr(in2, pattern2);
	printf("A string achada '%s'\n", res);
	return (0);
}
