/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munal <munal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:21:10 by munal             #+#    #+#             */
/*   Updated: 2021/12/14 14:26:19 by munal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int i)
{
	int	aux;

	if (i == 0)
		return (0);
	else if (i == 1)
		return (1);
	else if (i > 1)
	{
		aux = ft_fibonacci(i - 1) + ft_fibonacci(i -2);
		return (aux);
	}
	else
		return (-1);
}
int main()
{
	printf("%d", ft_fibonacci(5));
}
