#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	char	*s;

	if (n == -2147483648)
		return ("-2147483648");
	len = 0;
	i = n;
	while(i)
	{
		i /= 10;
		len ++;
	}
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	if (!(s = (char *)malloc(sizeof(char) * len +1)))
		return (NULL);
	s[len] = '\0';
	while(n)
	{
		s[len] = (n % 10) +'0';
		n /= 10;
	}
	return (s);
}
