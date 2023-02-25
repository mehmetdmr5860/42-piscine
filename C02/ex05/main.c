#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main()
{
       printf("%d", ft_str_is_uppercase("ABCDEFGH"));
       printf("\n%d", ft_str_is_uppercase("ABCDEFsDS"));
       printf("\n%d", ft_str_is_uppercase("-_2313BCDEFGaH"));
}
