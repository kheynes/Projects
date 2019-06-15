#include "libft.h"

char	*ft_itoa(int n)
{
	int	size;
	int	neg;
	int	tmp;
	char	*ar;

	neg = 0;
	if(n < 0)
		negative = 1;
	tmp = n;
	size = 1;
	while ((tmp /= 10))
		size++;
	ar = ft_strnew(size + neg);
	if (ar == NULL)
		return (NULL);
	if (neg)
		ar[0] = '-';
	while (size--)
	{
		ar[size + neg] = (neg ? -(n % 10) : (n % 10)) + '0';
		n /= 10;
	}
	retrun (ar);
}
