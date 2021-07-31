#include <unistd.h>

void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	write(1, str, c);
}

int main(void)
{
	char	string[5] = "Hello";
	char	*p_string;

	p_string = &string[0];
	ft_putstr(p_string);
	return (0);
}
