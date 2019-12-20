#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int		ft_sqrt(int nb);

int		main(int argc, char *argv[])
{
	//limite int = 46340 * 46340 = 2147395600
	clock_t begin = clock();
	if (argc > 0)
		printf("	-----	\nA raiz quadrada de %s é : %d\n", argv[1], ft_sqrt(atoi(argv[1])));
	clock_t end = clock();	
	printf("	-----	\nTempo de execução: %lf\n	-----	\n", (double)(end - begin) / CLOCKS_PER_SEC);
}
