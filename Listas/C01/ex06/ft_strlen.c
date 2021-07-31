int	ft_strlen(char *str)
{
	int	chr;

	chr = 0;
	while (str[chr] != '\0')
	{
		chr++;
	}
	return (chr);
}
