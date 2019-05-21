#include <stdio.h>
#include <stdlib.h>
char	*ft_strdup(char *src)
{
	int i;
	int l;
	char *str;

	l = 0;
	while (src[l])
		l++;
	str = (char*)malloc(sizeof(*str) * (l + 1));
	i = 0;
	while (i < l)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

int main()
{
	char c[5] = "Copy";
	
	printf("%s", ft_strdup(c));

	return (0);
}
