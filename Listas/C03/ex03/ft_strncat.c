int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char	*dest, char	*src, unsigned int	nb)
{
	unsigned int	a;
	int				size_dest;

	a = 0;
	size_dest = ft_strlen(dest);
	while (a < nb && *src != '\0')
	{
		dest[size_dest] = *src;
		size_dest++;
		src++;
		a++;
	}
	while (a < nb)
	{
		dest[size_dest] = '\0';
		size_dest++;
		a++;
	}
	return (dest);
}
