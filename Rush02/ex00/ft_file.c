/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 10:50:01 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/08 18:20:12 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_open_file(char *path)
{
	return (open(path, O_RDONLY));
}

int		ft_close_file(int f)
{
	close(f);
	return (0);
}

int		ft_read_file(int fd, char *dict, int length)
{
	return (read(fd, &dict, length));
}

void	ft_free_dict(char *dict)
{
	free(dict);
}
