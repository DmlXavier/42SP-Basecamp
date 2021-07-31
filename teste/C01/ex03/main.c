#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int *p_div;
	int *p_mod;

	a = 25;
	b = 2;
	p_div = &c;
	p_mod = &d;

	printf("%d %d\n", a, b);
	ft_div_mod(a, b, p_div, p_mod);
	printf("%d %d\n", c, d);
	return (0);
}