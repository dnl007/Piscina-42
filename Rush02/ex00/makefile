# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnascime <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/07 12:25:21 by dnascime          #+#    #+#              #
#    Updated: 2019/12/08 21:24:51 by dnascime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

main:	header.o
	gcc -Wall -Wextra -Werror header.o ft_atoi.c ft_print.c ft_locate.c ft_file.c ft_string.c main.c -o rush-02

header.o: 	ft_header.c		ft_header.h
	gcc -c -o header.o -Wall -Wextra -Werror ft_header.c

fclean:
	rm *.o

norm:
	norminette -R CheckForbiddenSourceHeader *.[ch]
