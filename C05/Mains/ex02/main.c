#include <stdlib.h>
#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(int argc, char *argv[])
{
	if (argc > 0)
		printf("O número %s elevado a %s é : %d\n", argv[1], argv[2], ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
}
