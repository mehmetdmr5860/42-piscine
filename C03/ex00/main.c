#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main()
{
	printf("%d", ft_strcmp("42_Piscine", "42_Piscine1"));
	printf("\n%d", ft_strcmp("Merhaba", "Me"));
	printf("\n%d", ft_strcmp("Me", "Merhaba"));
	printf("\n%d", ft_strcmp("Merhaba", "Merhaba"));
}
