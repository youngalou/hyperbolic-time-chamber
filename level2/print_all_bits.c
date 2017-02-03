/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_all_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 15:51:51 by lyoung            #+#    #+#             */
/*   Updated: 2017/02/02 16:12:00 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void			print_bits(unsigned char octet)
{
	int		base;

	base = 128;
	while (base > 0)
	{
		if (octet < base)
			write(1, "0", 1);
		else
		{
			write(1, "1", 1);
			octet = octet % base;
		}
		base = base / 2;
	}
}

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	a;
	unsigned char	b;

	a = octet << 4;
	b = octet >> 4;
	return (a + b);
}

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	res;

	i = 0;
	res = 0;
	while (i < 8)
	{
		res = (res * 2) + octet % 2;
		octet = octet / 2;
		i++;
	}
	return (res);
}

int		main(int argc, char **argv)
{
	unsigned char octet = atoi(argv[1]);
	if (argc < 2)
		printf("Too few arguments.\n");
	else
	{
		print_bits(octet);
		printf("	print_bits\n");
		print_bits(swap_bits(octet));
		printf("	swap_bits\n");
		print_bits(reverse_bits(octet));
		printf("	reverse_bits\n");
	}
	return (0);
}
