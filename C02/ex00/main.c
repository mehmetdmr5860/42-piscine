#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main()
{
	char src[] = "beautiful";
	char dest[] = "   ";
	printf("%s", ft_strcpy(dest, src));
	
}
