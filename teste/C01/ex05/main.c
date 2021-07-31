#include <stdio.h>

void	ft_putstr(char *str);

int main(void)
{
	char	string[5] = "Hello";
	char	*p_string;

	p_string = &string[0];
	ft_putstr(p_string);
	return (0);
}