void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	var_a;
	int	var_b;

	var_a = *a;
	var_b = *b;
	*a = var_a / var_b;
	*b = var_a % var_b;
}
