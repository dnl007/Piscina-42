/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 08:51:40 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/08 21:58:30 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include <fcntl.h>
#include <unistd.h>

/*
** chamar função para escrever numero por extenso
** retornar 0 se tudo ok e 1 se der algum erro.
*/

void	ft_locate(char *number, char *dict)
{
	int size;

	size = ft_strlen(number);
	if (size < 2)
		ft_unity(number, dict);
	if (size == 2)
		ft_unity_2_digits(number, dict, size);
	ft_putchar(10);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		fr;
	char	dict[1024];

	if (argc != 2)
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
	fr = read(fd, dict, 1024);
	if (fr < 0)
	{
		ft_putstr("error");
		return (1);
	}
	ft_locate(argv[1], dict);
	return (0);
}
