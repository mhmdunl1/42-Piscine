/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munal <munal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 20:01:17 by munal             #+#    #+#             */
/*   Updated: 2021/12/13 20:10:05 by munal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	snc;

	snc = 1;
	while (nb > 0)
	{
		snc *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (snc);
}
int	main()
{
	printf(ft_iterative_factorial(3));
}
