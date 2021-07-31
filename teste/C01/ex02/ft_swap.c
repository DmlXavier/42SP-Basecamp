#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tr;
	
	tr = *a;
	*a = *b;
	*b = tr;
}

int main(void)
{
	int *p_a;
	int *p_b;
	int a;
	int b;

	a = 5;
	b = 2;
	p_a = &a;
	p_b = &b;
	printf("%d %d\n", a, b);
	ft_swap(p_a, p_b);
	printf("%d %d\n", a, b);
	return (0);
}