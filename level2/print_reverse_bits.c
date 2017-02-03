/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 14:04:14 by lyoung            #+#    #+#             */
/*   Updated: 2017/02/02 14:13:20 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int				main(void)
{
	print_bits(reverse_bits(12));
	return (0);
}
