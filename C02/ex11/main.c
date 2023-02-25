#include <unistd.h>

void	ft_putstr_non_printable(char *str);
void	ft_putchar(char c);

int main (void)
{
	ft_putstr_non_printable("merhaba\ngunaydin");
	ft_putchar('\n');
	ft_putstr_non_printable("Merhaba dunya\t\v\0n");
	ft_putchar('\n');
	ft_putstr_non_printable("");
} 
