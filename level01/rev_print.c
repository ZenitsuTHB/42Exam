/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:31:18 by avolcy            #+#    #+#             */
/*   Updated: 2023/09/21 12:33:39 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$*/

#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0;
	
	if (ac == 2)
	{
		while(av[1][i] != '\0')
			i++;
		while(i-- > 0)
			write(1,&av[1][i], 1);
		write(1, "\n",1);
	}
	return 0;
}

