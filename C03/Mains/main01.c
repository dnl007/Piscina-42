/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdanelon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:57:38 by jdanelon          #+#    #+#             */
/*   Updated: 2019/12/04 08:16:32 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char			in11[] = "\200";
	char			in21[] = "\0";
	char			in12[] = "String";
	char			in22[] = "Moulinette";
	unsigned	int	size;
	int				res;

	size = 5;
	printf("As strings são '%s' e '%s'\n", in11, in21);
	res = ft_strncmp(in11, in21, size);
	printf("Comparando %d caracteres...\n", size);
	printf("ft_Veredicto: %d\n", res);
	printf("\n");
	printf("As strings são '%s' e '%s'\n", in11, in21);
	res = strncmp(in11, in21, size);
	printf("Comparando %d caracteres...\n", size);
	printf("Veredicto: %d\n", res);
	printf("\n");
	printf("As strings são '%s' e '%s'\n", in12, in22);
	res = ft_strncmp(in12, in22, size);
	printf("Comparando %d caracteres...\n", size);
	printf("ft_Veredicto: %d\n", res);
	printf("\n");
	printf("As strings são '%s' e '%s'\n", in12, in22);
	res = strncmp(in12, in22, size);
	printf("Comparando %d caracteres...\n", size);
	printf("Veredicto: %d\n", res);
return (0);
}
