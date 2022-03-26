#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dst;

	dst = dest;
	while (*dst != '\0')
		dst++;
	while (*src != '\0' && nb > 0)
	{
		*dst = *(unsigned char *)src;
		dst++;
		src++;
		nb--;
	}
	*dst = '\0';
	return (dest);
}

int		main(void)
{
	char	*str_base;
	char	dest[100];
	char	dest2[100];
	char	*src;
	int		index;
	int	nb;

	str_base = "42";
	src = " istanbul";
	index = 0;
	nb = 5;
	while (index < 6)
	{
		dest[index] = str_base[index];
		dest2[index] = str_base[index];
		index++;
	}
	printf("strncat  : %s$\n", strncat(dest, src, nb));
	printf("ft_strncat : %s$\n", ft_strncat(dest2, src, nb));
}
