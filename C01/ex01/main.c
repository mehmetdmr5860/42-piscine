#include <stdio.h>

void	ft_ultimate_ft(int *********);

int		main(void)
{
	int a;
	int *nbr1, *nbr2, *nbr3, ****nbr4, *****nbr5, ******nbr6, *******nbr7, ********nbr8, *********nbr9;

	a = 21;
	nbr1 = &a;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;
	printf("(21): %d\n", a);
	ft_ultimate_ft(nbr9);
	printf("(42): %d\n", a);
}

