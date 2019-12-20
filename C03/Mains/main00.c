/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdanelon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:36:00 by jdanelon          #+#    #+#             */
/*   Updated: 2019/12/04 15:46:05 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s11[] = "Moulinette";
	char	s21[] = "\200";
	char	s12[] = "Moulinette";
	char	s22[] = "\200";
	int		res;

	printf("As strings são '%s' e '%s'\n", s11, s21);
	res = ft_strcmp(s11, s21);
	printf("Veredicto: %d\n", res);
	printf("As strings são '%s' e '%s'\n", s12, s22);
	res = strcmp(s12, s22);
	printf("Veredicto: %d\n", res);
	return (0);
}
