#include<unistd.h>

int ft_strcmp(char *s1, char *s2)
{
	int var;

	var = 0;
	while((s1[var] == s2[var]) && s1[var] != '\0' && s2[var] != '\0')
		var++;
	return(s1[var]-s2[var]);
}
/*
int main()
{
	char s1[]="ali";
	char s2[]="bli";

	printf("%d",ft_strcmp(s1,s2));
}*/
