#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		c;
	int		d;

	c = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[c] != '\0')
	{
		d = 0;
		while (str[c + d] == to_find[d] && str[c + d] != '\0')
		{
			if (to_find[d + 1] == '\0')
				return (&str[c]);
			d++;
		}
		c++;
	}
	return (0);
}

int main()
{

char str [] = "ankara çok güzel" ; 
char to_find [] = "";
printf("%s", ft_strstr(str,to_find));
}
