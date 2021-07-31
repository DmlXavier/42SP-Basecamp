#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	if (n < 10)
	{
		int start;
		int num;

		start = 0;

		while (n < 10)
		{
			num = 1;
			while (num < n && start < 10 && n < 10)
			{
				ft_putchar(start + 48);
				ft_putchar(num + 48);
				num++;
			}
			ft_putchar(',');
			ft_putchar(' ');
			n++;
			start++;
		}
		ft_putchar('\n');
	}
}