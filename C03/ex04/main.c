#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main()
{
	char str[] = "Subat 42 havuz sureci";
	char find[] = "havuz";
	printf("%s", ft_strstr(str, find));
}
