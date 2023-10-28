/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:05:18 by avolcy            #+#    #+#             */
/*   Updated: 2023/10/03 22:42:00 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*int ispace(char c)
{
	return(c == 32 || c >= 9 );
}
*/
#include <unistd.h>
#include <stdlib.h>

int	main (int argc, char **argv)
{
  int i = 0;
  
  if(argc == 2)
  { 
 

    while(argv[1][i] == 32 || argv[1][i] == 9)
      i++;
    while(argv[1][i] && (argv[1][i] != 32 || argv[1][i] != 9))
    {
      if(argv[1][i] == 32 && (argv[1][i + 1] != 32 && argv[1][i + 1] != 9))
      {
        write(1,"   ",3);
        i++;
      }
      if(argv[1][i] == 32 || argv[1][i] == 9)
        i++;
      write(1, &argv[1][i], 1);
        i++;
	}
  }
  write(1, "\n", 1);
}

/*int main()
{
  int i = 0;
  int argc = 2;  
  char *argv;
  
  argv = "        hola test   lo tengo.  ";
  program(argc, argv);
  return 0;
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		expand_str(av[1]);
	}
	write(1, "\n",1);
	return (0);
}*/
