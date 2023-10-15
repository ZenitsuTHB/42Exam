/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:09:50 by avolcy            #+#    #+#             */
/*   Updated: 2023/10/14 00:40:22 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "flood_fill.h"

void printArray(char **tab, t_point size) 
{
    int j; 
	int i = 0;
	
	while(i < size.y)
	{
		j = 0;
        while(j < size.x) 
		{
            printf("%c ", tab[i][j]);
			j++;
        }
		i++;
        printf("\n");
    }
}

void fill(char **tab, t_point size, t_point cur, char to_fill) 
{
    if (cur.y < 0 || cur.y >= size.y || cur.x < 0 
			|| cur.x >= size.x || tab[cur.y][cur.x] != to_fill)
        return;

    tab[cur.y][cur.x] = 'F';
    fill(tab, size, (t_point) {cur.x - 1, cur.y}, to_fill);
    fill(tab, size, (t_point) {cur.x + 1, cur.y}, to_fill);
    fill(tab, size, (t_point) {cur.x, cur.y - 1}, to_fill);
    fill(tab, size, (t_point) {cur.x, cur.y + 1}, to_fill);
}

void flood_fill(char **tab, t_point size, t_point begin) 
{
    fill(tab, size, begin, tab[begin.y][begin.x]);
}

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

/*int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}*/
int main() {
    t_point size = {5, 5}; // Define the size of the 2D array
    char **tab = (char **)malloc(size.y * sizeof(char *));
    for (int i = 0; i < size.y; i++) {
        tab[i] = (char *)malloc(size.x * sizeof(char));
    }

    // Initialize the 2D array with some characters
    char data[5][5] = {
        "AAAAA",
        "AABBA",
        "AAABA",
        "AABBA",
        "AAAAA"
    };

    for (int i = 0; i < size.y; i++) {
        for (int j = 0; j < size.x; j++) {
            tab[i][j] = data[i][j];
        }
    }

    t_point start = {2, 2}; // Define the starting point for flood fill
    printf("Original Array:\n");
    printArray(tab, size);

    flood_fill(tab, size, start);

    printf("\nArray After Flood Fill:\n");
    printArray(tab, size);

    // Free dynamically allocated memory
    for (int i = 0; i < size.y; i++) {
        free(tab[i]);
    }
    free(tab);

    return 0;
}
