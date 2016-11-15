/*
** my_malloc.c for mystd in my_malloc.c
** 
** Made by Lucas Santoni
** Login   <lucas.santoni@epitech.eu>
** 
** Started on  Tue Nov 15 11:42:10 2016 Lucas Santoni
** Last update Tue Nov 15 11:42:10 2016 Lucas Santoni
*/

#include <stdlib.h>

void	*my_malloc(int	size)
{
  void	*ptr;

  if ((ptr = malloc(size)) != NULL)
    return (ptr);
  else
    return (NULL);
}
