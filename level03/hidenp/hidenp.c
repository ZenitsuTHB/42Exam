/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:00:52 by avolcy            #+#    #+#             */
/*   Updated: 2023/10/15 23:13:55 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int fstrlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
//	printf("len->%d\n", i);
	return i;
}

int main(int ac, char **av)
{
	int i = 0;
	char *f;
	char *s;

	if (ac == 3)
	{
		f = av[1];
		s = av[2];
		int j = 0;
		while (f[i] && s[j])
		{
			if (f[i] == s[j])
			{
				i++;
			}
				j++;
		}	
//		printf("flag->%d\n", flag);
		if (f[i] == '\0')// && flag == fstrlen(f))
			ft_putchar('1');
		else
			ft_putchar('0');
	}
	ft_putchar('\n');
	return (0);
}
