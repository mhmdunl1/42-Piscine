/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munal <munal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:27:31 by munal             #+#    #+#             */
/*   Updated: 2021/12/06 20:33:40 by munal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] += 'a' - 'A';
		}
		i++;
	}
	return (str);
}

int	main()
{
	char str [] = "MUHAMMED";
	char *pstr;
	pstr = str;
	printf("%s", ft_strlowcase(pstr));
}
