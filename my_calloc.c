/*
** my_calloc.c for mystd in my_calloc.c
** 
** Made by Lucas Santoni
** Login   <lucas.santoni@epitech.eu>
** 
** Started on  Tue Nov 15 15:38:13 2016 Lucas Santoni
** Last update Tue Nov 15 15:38:13 2016 Lucas Santoni
*/

#include "mystd.h"

void	*my_calloc(const int nb, const int size)
{
  void	*ptr;

  ptr = malloc(nb * size);
  if (ptr == NULL)
    return (NULL);
  my_memset(ptr, 0, nb * size);
  return (ptr);
}
