#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}

int main(void)
{
		char s1[]	= "aaa";
		char s2[]	= "aaab";
	printf("-----------------------------\n");
	printf("ilk string: %s \n", s1);
	printf("-----------------------------\n");
	printf("ikinci string: %s \n ",  s2);
	printf("-----------------------------\n");
	printf("ft_strcmp: %d \n", ft_strcmp(s1, s2));
	printf("-----------------------------");
	return (0);
}
