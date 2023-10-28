/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:42:30 by avolcy            #+#    #+#             */
/*   Updated: 2023/10/15 22:00:33 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	char *s;

	if (ac == 2)
	{
		s = av[1];

		while (s[i])
		{
			if (s[i] == '_')
			{
				i++;
				s[i] -= 32;
			} 
			write(1, &s[i], 1);
			i++;
		}
	}
	write(1, "\n",1);
	return 0;
}