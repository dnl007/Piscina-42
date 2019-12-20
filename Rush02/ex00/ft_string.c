/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 10:22:12 by dnascime          #+#    #+#             */
/*   Updated: 2019/12/09 19:24:52 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[j + i] = (unsigned char)src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	char	print;

	i = 0;
	while (src[i] != '\0' && src[i] != '\n')
	{
		print = src[i];
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	char			*ret;

	i = 0;
	j = 0;
	ret = "0";
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (ret);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcmp(char *s1, char s2)
{
	unsigned int	i;
	char			*search;

	i = 0;
	search = ": ";
	while (s1[i] != '\0')
	{
		if (s1[i] == s2)
			return (ft_strstr(&s1[i], search));
		i++;
	}
	return (0);
}
