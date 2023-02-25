#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main()
{
	printf("%d", ft_str_is_lowercase("abcgdgdefghijkl"));
    printf("\n%d", ft_str_is_lowercase("abSDcAfggdefghijkl"));
    printf("\n%d", ft_str_is_lowercase("-_13453556efdbfdSghij67"));
}
