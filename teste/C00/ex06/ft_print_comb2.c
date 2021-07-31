#include <unistd.h>

int main(void)
{
	int	cont1;
	int	cont2;
	char	a;

	write(1, "00 01", 5);
	cont1 = 0;
	cont2 = 2;
	while (cont1 < 100 && cont2 < 100)
	{
		write(1, ", ", 2);
		a = cont1 / 10 + '0';
		write(1, &a, 1);
		a = cont1 % 10 + '0';
		write(1, &a, 1);
		write(1, " ", 1);
		a = cont2 / 10 + '0';
		write(1, &a, 1);
		a = cont2 % 10 + '0';
		write(1, &a, 1);
		++cont2;
		if (cont2 == 100)
		{
			cont2 = ++cont1 + 1;
		}
	}
	write(1, "\n", 1);
}
