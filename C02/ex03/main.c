#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main()
{
	printf("%d", ft_str_is_numeric("012394894387493"));
	printf("\n%d", ft_str_is_numeric("0484882aj8995489"));
	printf("\n%d", ft_str_is_numeric("-_sfjsdsdcfs67sdlkc,"));
}
