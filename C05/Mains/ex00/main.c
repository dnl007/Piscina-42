#include <stdlib.h>
#include <stdio.h>

int		ft_iterative_factorial(int nb);

int		main(int argc, char *argv[])
{
	if (argc > 0)
		printf("Fatorial de %s é : %d\n", argv[1], ft_iterative_factorial(atoi(argv[1])));
}
