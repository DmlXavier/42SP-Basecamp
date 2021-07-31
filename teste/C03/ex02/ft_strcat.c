int	ft_strlen(char	*str)
{
	int	a;
	
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_strcat(char	*dest, char	*src)
{
	int	size_dest;

	size_dest = ft_strlen(dest);

	while (*src != '\0')
	{
		dest[size_dest] = *src;
		src++;
		size_dest++;
	}
	dest[size_dest] ='\0';
	return (dest);
}
