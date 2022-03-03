#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	d;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[d] != '\0')
	{
		dest[i + d] = src[d];
		d++;
	}
	dest[i + d] = '\0';
	return (dest);
}

int main()
{

char src [] = "test";
char dest [] = "deneme";
printf("%s", ft_strcat(dest, src));


}
