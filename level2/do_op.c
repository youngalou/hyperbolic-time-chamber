/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 13:28:19 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/31 13:40:33 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		do_op(int a, int b, char op)
{
	if (op == '*')
		return (a * b);
	else if (op == '/')
		return (a / b);
	else if (op == '+')
		return (a + b);
	else if (op == '-')
		return (a - b);
	return (0);
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	char	op;

	if (argc != 4)
		write(1, "\n", 1);
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		op = argv[2][0];
		printf("%d\n", do_op(a, b, op));
	}
	return (0);
}
