#include<unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '\0' && (*s1 == *s2) && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
/*
int	main(void)
{
	char *str1;
	char *str2;
	int	n;

	n = 4;
	str1 = "Helo";
	str2 = "Hello";

	printf("strcmp  : %d\n", strncmp(str1, str2, n));
	printf("ft_strcmp : %d\n", ft_strncmp(str1, str2, n));
}*/
