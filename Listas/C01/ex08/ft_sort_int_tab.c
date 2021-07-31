void	ft_sort_int_tab(int *tab, int size)
{
	int	max;
	int	temp;
	int	i;

	max = size;
	while (max > 0)
	{
		i = 0;
		while (i++ < max)
		{
			if (tab[i - 1] > tab[i])
			{
				temp = tab[i];
				tab[i] = tab[i - 1];
				tab [i - 1] = temp;
			}
		}
		max--;
	}
}
