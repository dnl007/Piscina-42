/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 15:11:08 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/04 08:45:21 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	get_size(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	remaing;
	char			*destiny;
	unsigned int	src_size;

	remaing = size;
	destiny = dest;
	src_size = get_size(src);
	while (remaing-- != 0 && *destiny != '\0')
		destiny++;
	dest_size = destiny - dest;
	remaing = size - dest_size;
	if (remaing == 0)
		return (dest_size + src_size);
	while (*src != '\0')
	{
		if (remaing > 1)
		{
			remaing--;
			*destiny++ = *src;
		}
		src++;
	}
	*destiny = '\0';
	return (dest_size + src_size);
}
