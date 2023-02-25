#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a, b, *ptr1, *ptr2;

	a = 50;
	b = 10;
	ptr1 = &a;
	ptr2 = &b;
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("a/b sonuc= %d\n", a);
	printf("a mod b sonuc= %d\n", b);
}
