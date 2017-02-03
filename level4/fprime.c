/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 10:46:21 by lyoung            #+#    #+#             */
/*   Updated: 2017/02/02 11:14:51 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fprime(int nb)
{
	int		div;

	div = 2;
	while (div < nb)
	{
		while (nb % div == 0)
		{
			printf("%d*", div);
			nb = nb / div;
		}
		div++;
	}
	printf("%d\n", nb);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		printf("\n");
	else
		fprime(atoi(argv[1]));
	return (0);
}
