/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:57:25 by avolcy            #+#    #+#             */
/*   Updated: 2023/09/26 12:57:39 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("\n");
		return 0;
	}

	int fnum = atoi(argv[1]);
	int snum = atoi(argv[3]);
	char *operat = argv[2];
	int result = 0;

	if (*operat == '*')
		result = fnum * snum;
	else if (*operat == '+')
		result = fnum + snum;
	else if (*operat == '-')
		result = fnum - snum;
	else if (*operat == '/')
	{
		if (snum != 0)
			result = fnum / snum;
		else
			printf("Error can't divide by zero\n");
	//	return 1;
	}
	else if (*operat == '%')
	{
		if (snum != 0)
			result = fnum % snum;
		else
			printf("Error can't divide by zero\n");
	//	return 1;
	}
	else
	{
		printf("Invalid operator");
	return 1;
	}
	printf("%d\n", result);
	return 0;
}
