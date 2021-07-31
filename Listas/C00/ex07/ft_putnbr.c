#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483647)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nb = 147483648;
		ft_putnbr(nb);
	}
	else if (nb == 2147483647)
	{
		write(1, "2", 1);
		nb = 147483648;
		ft_putnbr(nb);
	}
	else if (nb < 0)
	{	
		write(1, "-", 1);
		nb = nb * -1;
		ft_putnbr(nb);
	}
	else if (nb / 10 )
	{
		ft_putnbr(nb / 10);
	}
	write(1, '0' + (nb % 10), 1);
}
