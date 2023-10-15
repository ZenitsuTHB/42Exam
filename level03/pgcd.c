/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:03:02 by avolcy            #+#    #+#             */
/*   Updated: 2023/09/26 12:56:11 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  // Including the standard input-output header file for functions like printf.
#include <stdlib.h> // Including the standard library header for functions like atoi and exit.
#include <string.h> // Including the string header for functions like strlen.

/**
 * Computes the greatest common divisor (GCD) of two integers.
 *
 * @param a: An integer.
 * @param b: Another integer.
 * @return: The greatest common divisor of a and b.
 */
int GCD(int a, int b) {
    if (b == 0)  // Base case: if b is zero, the GCD is a.
        return a;
    return GCD(b, a % b);  // Recursive case: continue with b and the remainder of a divided by b.
}

/**
 * Converts a string representing a positive integer to an integer value.
 *
 * @param str: The string representing the positive integer.
 * @return: The integer value of the string.
 * @exception: Exits the program if the string is not a valid positive integer.
 */
int convertToInt(const char* str) {
    int num = atoi(str);  // Using the atoi function to convert the string to an integer.

    if (num <= 0) {  // Checking if the converted number is not positive.
        printf("Invalid input: %s is not a positive integer.\n", str);
        exit(EXIT_FAILURE);  // Exiting the program with a failure status.
    }

    return num;  // Returning the converted positive integer.
}

/**
 * Computes and displays the highest common denominator (HCD) of two positive integers.
 *
 * @param str1: The string representing the first positive integer.
 * @param str2: The string representing the second positive integer.
 */
void computeHCD(const char* str1, const char* str2) {
    int num1 = convertToInt(str1);  // Converting the first string to an integer.
    int num2 = convertToInt(str2);  // Converting the second string to an integer.

    int hcd = GCD(num1, num2);  // Calculating the highest common denominator.

    printf("%d\n", hcd);  // Displaying the highest common denominator.
}

int main(int argc, char* argv[]) {
    if (argc != 3) {  // Checking if the number of parameters is not 2.
        printf("\n");
        return 0;
    }

    computeHCD(argv[1], argv[2]);  // Computing and displaying the highest common denominator.

    return 0;

	 #include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int pgcd(int fnum, int snum);
int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("\n");
        return (0);
    }
    int fnum = atoi(argv[1]);
    int snum = atoi(argv[2]);
    int res = 0;

    if (fnum <= 0 || snum <= 0)
    {
        printf("Invalid input: %s%s are not a positive integer.\n", argv[1], argv[2]);
        return 1;
    }
    else
    {
        res = pgcd(fnum, snum);
    }
    printf("%d\n",res);
    return 0;
}

int pgcd(int fnum, int snum)
{
    if (snum == 0)
            return (fnum);
        return pgcd(snum, fnum % snum);
}
