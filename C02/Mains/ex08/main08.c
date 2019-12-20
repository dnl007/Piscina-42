/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 16:36:28 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/02 09:28:51 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strlowcase(char *str);

int			main(void)
{
	char source[] = "abcDEF";
	printf("abcDEF - Result: %s\n", ft_strlowcase(source));
}
