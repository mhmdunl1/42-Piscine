/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munal <munal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:48:52 by munal             #+#    #+#             */
/*   Updated: 2021/12/06 20:24:48 by munal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
        if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] -= 'a' - 'A';
		}
		i++;
	}
	return (str);
}

int	main()
{
	char	str [] = "muhammed";
	char *pstr;
	pstr = str;
	printf("%s", ft_strupcase(pstr));
}
