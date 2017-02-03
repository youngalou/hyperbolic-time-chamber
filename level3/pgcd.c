/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 11:27:27 by lyoung            #+#    #+#             */
/*   Updated: 2017/02/01 11:36:44 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		pgcd(int a, int b)
{
	int		i;

	i = b;
	while (i > 0)
	{
		if (a % i == 0 && b % i == 0)
			return (i);
		i--;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;

	if (argc != 3)
		printf("\n");
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		if (a >= b)
			printf("%d\n", pgcd(a, b));
		else
			printf("%d\n", pgcd(b, a));
	}
	return (0);
}
