/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 17:26:30 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/09 20:08:55 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_calc_factorial(int cont, int factorial, int nb)
{
	if (cont < nb + 1)
	{
		factorial = factorial * cont++;
		factorial = ft_calc_factorial(cont, factorial, nb);
	}
	return (factorial);
}

int		ft_recursive_factorial(int nb)
{
	int factorial;
	int i;

	i = 1;
	factorial = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	return (ft_calc_factorial(i, factorial, nb));
}
