/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:54:57 by avolcy            #+#    #+#             */
/*   Updated: 2023/09/26 12:49:29 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_print(char c)
{
	if ((c >= 'a' && c <= 'm') ||
			(c >= 'A' && c <= 'M'))
	{
            c += 13;
            return (write(1, &c, 1));
    }
    else if ((c >= 'n' && c <= 'z') ||
            (c >= 'N' && c <= 'Z'))
    {
           	c -= 13;
           return ( write(1, &c, 1));
    }
	else
		return (write (1, &c, 1));
}

int main(int ac, char **av)
{
	if (ac == 2)
		while (*av[1])
			ft_print(*av[1]++);
	write(1, "\n", 1);
	return 0;
}


