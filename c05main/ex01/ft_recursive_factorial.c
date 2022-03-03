/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munal <munal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:21:41 by munal             #+#    #+#             */
/*   Updated: 2021/12/14 15:48:47 by munal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	snc;

	snc = 1;
	if (nb > 0)
	{
		snc = snc * nb * ft_recursive_factorial(nb -1);
		nb --;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (snc);
}
int	main()
{
	printf("%d", ft_recursive_factorial(5));
}
