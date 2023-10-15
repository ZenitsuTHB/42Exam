/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:18:47 by avolcy            #+#    #+#             */
/*   Updated: 2023/09/21 12:30:56 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc*/
#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int j;

	if (ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if (av[1][i] <= 'z' && av[1][i] >= 'a')
			{
				j = av[1][i] + 1 - 'a';
				while(j-- > 0)
					write(1,&av[1][i],1);
			} 
			else if (av[1][i] <= 'Z' && av[1][i] >= 'A')
			{
				j = av[1][i] + 1 - 'A';
				while(j-- > 0)
					write(1,&av[1][i],1);
			}
			else
					write(1,&av[1][i],1);
				i++;
		}
		write(1,"\n",1);
	}
	return 0;
}
