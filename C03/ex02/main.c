#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main()
{
	char src[] = "Mehmet";
	char dest[] = "5860 ";
	printf("%s", ft_strcat(dest, src));
}
