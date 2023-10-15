/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:09:53 by avolcy            #+#    #+#             */
/*   Updated: 2023/10/10 12:41:02 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int i = 8;

	while (i--)
	{
		if ((octet >> i) & 1)
			ft_putchar('1');
		else
			ft_putchar('0');
	}
}
/*int main ()
{
	unsigned char i = 8;

	print_bits(i);
	return 0;
}*/
