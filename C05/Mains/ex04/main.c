#include <stdlib.h>
#include <stdio.h>

int		ft_fibonacci(int index);

int		main(int argc, char *argv[])
{
	if (argc > 0)
		printf("O index %s da sequencia fibonacci é : %d\n", argv[1], ft_fibonacci(atoi(argv[1])));
}
