
#include "ft_printf.h"


int main()
{
	register int i = 10;
	int* a = &i;
	printf("%d", *a);
	getchar();
	return 0;
}

