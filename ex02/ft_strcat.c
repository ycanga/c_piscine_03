#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*dst;

	dst = dest;
	while (*dst != '\0')
		dst++;
	while (*src != '\0')
	{
		*dst = *(unsigned char *)src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (dest);
}
/*
int		main(void)
{
	char	*str_base;
	char	dest[100];
	char	dest2[100];
	char	*src;
	int		index;

	str_base = "42";
	src = " istanbul";
	index = 0;
	while (index < 2)
	{
		dest[index] = str_base[index];
		dest2[index] = str_base[index];
		index++;
	}
	printf("strcat : %s$\n", strcat(dest, src));
	printf("ft_strcat : %s$\n", ft_strcat(dest2, src));
}*/
