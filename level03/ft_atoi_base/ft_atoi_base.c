/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:43:26 by avolcy            #+#    #+#             */
/*   Updated: 2023/10/10 14:06:09 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_isblank(const char c)
{
	return (c == 32) || (c >= 9 && c <= 13);
}

int ft_isvalid(int c, int base)
{
	char *str1 = "0123456789abcdef";
	char *str2 = "0123456789ABCDEF";

	int i = 0;
	while (i < base)
	{
		if (c == str1[i] || c == str2[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int res = 0;
	int sign = 1;

	while (ft_isblank(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		sign = -1;
		i++;
	}
	while (ft_isvalid(str[i], str_base) != -1)
	{
		res = res * str_base + ft_isvalid(str[i], str_base);
		i++;
	}
	return (sign * res);
}
/*int main() {
    const char *str = "-13268!"; // Example hexadecimal number
    int result = ft_atoi_base(str, 10);
    printf("Result: %d\n", result);
    return 0;
}*/
