/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 19:19:45 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/05 10:45:18 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_valid_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' ||
				base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_resolve(int nbr, char *base, int print_mod, char mod)
{
	int result[200];
	int size;
	int i;

	i = 0;
	size = ft_strlen(base);
	while (nbr)
	{
		result[i] = nbr % size;
		nbr = nbr / size;
		i++;
	}
	while (--i >= 0)
		ft_putchar(base[result[i]]);
	if (print_mod)
		ft_putchar(mod);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	int		print_mod;
	char	mod;

	mod = 0;
	print_mod = 0;
	size = ft_strlen(base);
	if (nbr == -2147483648)
	{
		print_mod = 1;
		mod = base[-(nbr % size)];
		nbr = nbr / size;
		nbr = -nbr;
		ft_putchar('-');
	}
	else if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	if (ft_valid_base(base))
		ft_resolve(nbr, base, print_mod, mod);
}
