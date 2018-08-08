/*
** push_swap.h for my_pushswap in /home/jeremy.elkaim/CPE_2016_Pushswap
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Wed Nov 23 10:45:40 2016 jeremy elkaim
** Last update Wed Nov 23 10:49:37 2016 jeremy elkaim
*/

#include <stdlib.h>

typedef struct element element;
struct element
{
  int	val;
  struct element *next;
};
