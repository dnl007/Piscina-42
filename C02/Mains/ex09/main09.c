/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 15:53:35 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/02 14:27:18 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strcapitalize(char *str);

int			main(void)
{
	char source2[] = "Sdo ofok ok koeer ewer3/sdiemf-dk -dmdofo";
	char source[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Origin: %s\n", source);
	printf("Result: %s\n", ft_strcapitalize(source));
	printf("Origin: %s\n", source2);
	printf("Result: %s\n", ft_strcapitalize(source2));
}
