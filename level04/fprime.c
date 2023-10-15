/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:16:10 by avolcy            #+#    #+#             */
/*   Updated: 2023/10/13 17:25:45 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main (int ac, char **av)
{
    int i;
    int num;

    if (ac == 2)
    {
        i = 1;
        num = atoi(av[1]);
        if (num == 1)
            printf("1");
        while (num >= ++i)
        {
            if ((num % i) == 0)
            {
                printf("%d", i);
                if (num == i)
                    break ;
                printf("*");
                num = num / i;
                i = 1;
            }
        }
    }
    printf("\n");
    return 0;
}
