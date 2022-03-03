#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	d;

	c = 0;
	d = 0;
	while (dest[c])
		c++;
	while (src[d] && d < nb)
	{
		dest[c + d] = src[d];
		d++;
	}
	dest[c + d] = '\0';
	return (dest);
}

int main()
{

char dest [] = "mehmet";
char src [] = "berat";

printf("%s",ft_strncat(dest,src,3));


}
