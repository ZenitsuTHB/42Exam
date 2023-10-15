/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:59:39 by avolcy            #+#    #+#             */
/*   Updated: 2023/10/13 17:26:44 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h> 
  
 * Checks if a given number is prime.
 * @param n: The number to check.
 * @return: 1 if the number is prime, 0 otherwise.
 
int isPrime(int n) 
{
    if (n <= 1) 
        return 0; // Numbers less than or equal to 1 are not prime.
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		return 0;  // If n is divisible by any number from 2 to sqrt(n), it is not prime.
	}
	  return 1;  // If the number is not divisible by any number from 2 to sqrt(n), it is prime.
}

 * Displays the prime factors of a given positive integer.
 * @param n: The positive integer.
 
 void displayPrimeFactors(int n)
 {
 	if (n <= 0)
        return;  // If the number is not positive, do nothing.

    int originalNumber = n;  // Store the original number for later use.
    int isFirstFactor = 1;  // Flag to check if the current factor is the first factor.

    for (int i = 2; i <= n; i++)
	{
        if (isPrime(i) && n % i == 0)
		{
			if (isFirstFactor)
			{
                isFirstFactor = 0;
            } 
			else 
			{
                printf("*");  // Print '*' as a separator between factors.
            }
            printf("%d", i);  // Print the factor.
            n /= i;  // Divide n by the factor.
            i--;  // Decrement i to check if the same factor can be divided again.
        }
    }
    printf("\n");  // Print a newline after displaying the prime factors.
}

int main() {
    int number;

    // Read the number from the user.
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Display the prime factors of the number.
    displayPrimeFactors(number);

    return 0;
}*/

