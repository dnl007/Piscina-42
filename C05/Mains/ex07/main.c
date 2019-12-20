#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int		ft_find_next_prime(int nb);

int		main(int argc, char *argv[])
{
	// maior primo antes do limite de int = 2147483629
	// http://compoasso.free.fr/primelistweb/page/prime/liste_online_en.php
	clock_t begin = clock();
	if (argc > 0)
		printf("\t-----\t\n\tO próximo número primo depois de %s é: %d\n", argv[1], ft_find_next_prime(atoi(argv[1])));
	clock_t end = clock();	
	printf("\t-----\t\n\tTempo de execução: %lf\n\t-----\t\n", (double)(end - begin) / CLOCKS_PER_SEC);
}
