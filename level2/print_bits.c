/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 16:29:17 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/31 16:45:10 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		base;

	base = 128;
	while (base > 0)
	{
		if (octet < base)
		{
			write(1, "0", 1);
		}
		else
		{
			write(1, "1", 1);
			octet = octet % base;
		}
		base = base / 2;
	}
}

int		main(void)
{
	print_bits('A');
	return (0);
}
