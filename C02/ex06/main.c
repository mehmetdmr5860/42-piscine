#include <stdio.h>

int ft_str_is_printable(char *str);

int	main()
{
	printf("%d", ft_str_is_printable("CDFSCO?I34450%"));
	printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}

