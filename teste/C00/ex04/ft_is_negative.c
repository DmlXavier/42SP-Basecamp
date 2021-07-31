#include <unistd.h>

int	main(void)
{
	int	a;
	a = -5;
	if (a >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
	write(1, "\n", 1);
}
