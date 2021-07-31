void	ft_sort_int_tab(int *tab, int size)
{
	int max;
	int i;
	int tr;

	max = size;
	while (max > 0)
	{
		i = 0;
		while (i++ < max)
		{
			if (tab[i - 1] > tab[i])
			{
				tr = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = tr;
			}
		}
		max--;
	}
}
