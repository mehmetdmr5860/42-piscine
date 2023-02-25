#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main()
{
	char str[] = "42 Piscine, Subat havuzu?-42; test metin+i";
	char str1[] = "ndsjfkdlsf,dsfsd,dsad assd ?dsad+fdsa-%dsdf*dsfdf";
	printf("%s", ft_strcapitalize(str));
	printf("\n%s", ft_strcapitalize(str1));
}
