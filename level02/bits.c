/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:13:08 by avolcy            #+#    #+#             */
/*   Updated: 2023/10/28 14:22:31 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/*
	& and binario
	| or binario
	<< desplazamiento izq
	>> desplazamiento der
	~ negacion 
*/
// DESPLAZAMIENTOS   <<
// a = 01100010
// a = a << 3
// a = 000100000
//Ejercicio swap bit
// swap_bits(char c)
// return (c << 4) | (c >> 4);
//AND
//'a'        = 11100010
//mascara    = 10000000        (cualquier combinacion que todo sean 0 menos un 1) (normalmente usaremos el numer 1 o el 128)
//________________________
//			   10000000
//00000000 -> si arriba del uno de la mascara habia un
//Leer de derecha a izquierda
// void print_bits(char c)
// {
// 	int num_bits = 0;
// 	while(num_bits < 8)
// 	{
// 		if((c & (1 << num_bits)) == 0)
// 			write(1, "0", 1);
// 		else
// 			write(1, "1", 1);
// 		num_bits++;
// 	}
// }
//Leer de izquierda a derecha
void print_bits(char c)
{
	int num_bits = 0;
	while(num_bits < 8)
	{
		if((c & (128 >> num_bits)) == 0)
			write(1, "0", 1);
		else
			write(1, "1", 1);
		num_bits++;
	}
}
// INSERTAR bits usamos operacion inversa
// char res = '\0';
// res = 00000000;
// mask
//OR
//res  = 0000000000
//mask = 1000000000
// ________________
//       1000000000
//OR    (ejemplo si quiero meter un 1 en la cuarta coluymna)
//res              =  1000000000
//mask (128 >> 3)  =  0001000000
//                    ___________
//                    1001000000
void insert_bits(int bit)
{
	static int num_bits = 0;
	static char res = '\0';
	if (bit == 1)
	{
		res = res | (128 >> num_bits);
		num_bits++;
	}
	else if (bit == 0)
	{
		num_bits++;
	}
	//printf("bits vale %d\n", num_bits);
	if (num_bits == 8)
	{
		write(1, "\n", 1);
		write(1, &res, 1);
		num_bits = 0;
		res = '\0';
	}
}
//REVERSE_BITS
//Leer de izquierda a derecha
void reverse_bits(char c)
{
	int  num_bits = 0;
	char res = '\0';
	while(num_bits < 8)
	{
		if((c & (128 >> num_bits)) == 0)
		{
			//write(1, "0", 1);
			// Si hay un 0 no hago nada porque res ya a empezado todo en 0, no insertare un 0 si ya hay un 0!!!!!!!
		}
		else
		{
			//write(1, "1", 1);
			res = (res | 1 << num_bits);
		}
		num_bits++;
	}
	print_bits(res);
}
// num_bits = 0
// c           =  11000000
// mask (128)  =  10000000
//AND			  ________
//				  10000000    (como no da 0 entro en el else)
// res         =  00000000
// mask(1)     =  00000001 
//OR              ________
//                00000001
// c                =  11000000
// mask (128 >> 1)  =  01000000
//AND			       ________
//				       01000000    (como no da 0 entro en el else)
// mask(1 << 1)     =  00000010 
//OR                   ________
//                     00000011
{
	print_bits('a');
	insert_bits(0);
	insert_bits(1);
	insert_bits(1);
	insert_bits(0);
	insert_bits(0);
	insert_bits(0);
	insert_bits(0);
	insert_bits(1);
	
	insert_bits(0);
	insert_bits(1);
	insert_bits(1);
	insert_bits(0);
	insert_bits(0);
	insert_bits(0);
	insert_bits(0);
	insert_bits(1);
	write(1, "\n", 1);
	reverse_bits('a');
}
