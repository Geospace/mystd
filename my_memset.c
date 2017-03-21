/*
** my_memset.c for mystd in my_memset.c
** 
** Made by Lucas Santoni
** Login   <lucas.santoni@epitech.eu>
** 
** Started on  Tue Nov 15 15:31:38 2016 Lucas Santoni
** Last update Tue Nov 15 15:31:38 2016 Lucas Santoni
*/

#include "mystd.h"

void	my_memset(void *ptr, const char c, int n)
{
  char	*dest;

  if (ptr == NULL)
    return ;
  dest = ptr;
  while (n--)
    *dest++ = c;
}
