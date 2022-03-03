/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munal <munal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:57:08 by munal             #+#    #+#             */
/*   Updated: 2021/12/14 18:04:14 by munal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = argc - 1;
	b = 0;
	if (argc > 1)
	{
		while (a > 0)
		{
			b = 0;
			while (argv[a][b] != '\0')
			{
				write(1, &argv[a][b], 1);
				b++;
			}
			write(1, "\n", 1);
			a--;
		}
	}
	return (0);
}
