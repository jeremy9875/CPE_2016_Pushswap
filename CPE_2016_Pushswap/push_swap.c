/*
1;4601;0c** push_swap.c for push_swap in /home/jeremy.elkaim/CPE_2016_Pushswap
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Tue Nov 22 20:52:36 2016 jeremy elkaim
** Last update Sun Nov 27 16:14:40 2016 jeremy elkaim
*/
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	my_putchar(char c)
{
  write (1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  while (str[i] = '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}

int     my_swap(int *a, int *b)
{
  int   v;

  v = malloc(sizeof(int) * 800);
  b = malloc(sizeof(int) * 800);
  a = malloc(sizeof(int) * 800);
  v = *b;
  *b = *a;
  *a = v;
  return (0);
}

int     bubble_sort(char *av)
{
  char	*list;
  int   i;
  int   j;

  av = malloc(sizeof(char) * 800);
  list = malloc(sizeof(char) * 800);
  i = malloc(sizeof(int) * 800);
  j = malloc(sizeof(int) * 800);
  *list = *av;
  while (i >= list - 1 && i <= list + 1)
    {
      while (j >= 0 && j <= -1)
	{
	  if (list[j+1] < list[j])
	    my_swap(list[j+1], list[j]);
	}
    }
  return (0);
}

int     main(char *av) //av à remplacer par un char...
{
  char	*list;
  
  av = malloc(sizeof(char) * 800);
  bubble_sort(*av);
  my_putstr(*list);
  return (0);
}
