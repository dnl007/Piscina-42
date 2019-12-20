/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 09:49:59 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/11 20:25:17 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <fcntl.h>
#include <unistd.h>

char	ft_matriz(char *arquivo)
{
	char	**retorno;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	retorno = 0;
	while (arquivo[i] != '\0')
	{
		while (arquivo[i] != '\n')
		{
			retorno[i][j] = arquivo[i];
			j++;
		}
		i++;
	}
	return (**retorno);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		fr;
	char	tabuleiro[1024];

	if (argc == 2 && argv[0] != '\0')
	{
		ft_putchar(10);
		return (1);
	}
	fd = ft_open_file(_FILE);
	if (fd < 0)
	{
		ft_putstr("error");
		return (1);
	}
	fr = read(fd, tabuleiro, 1024);
	if (fr < 0)
	{
		ft_putstr("error");
		return (1);
	}
	ft_putstr(tabuleiro);
	return (0);
}
