char	*ft_strncpy(char *dst, char *src, size_t n)
{
	size_t i;

	i = 0;
	while (src != '\0' && (i < n))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
