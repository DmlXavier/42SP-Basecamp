#include <stdio.h>

void	ft_ultimate_div_mod(int	*a, int	*b);

int main(void)
{
	int x;
	int y;
	int *p_x;
	int *p_y;

	x = 10;
	y = 2;
	p_x = &x;
	p_y = &y;
	printf("%d %d\n", x, y);
	ft_ultimate_div_mod(p_x, p_y);
	printf("%d %d\n", x, y);
	return (0);
}