char	*ft_strstr(char	*str, char	*to_find)
{
	char	*found;
	char	*string;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		string = str;
		found = to_find;
		while (*string == *found && *found != '\0' && *string != '\0')
		{
			++string;
			++found;
		}
		if (*found == '\0')
			return (str);
		++str;
	}
	return (0);
}
