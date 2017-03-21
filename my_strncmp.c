/*
** my_strncmp.c for mystd in my_strncmp.c
** 
** Made by Lucas Santoni
** Login   <lucas.santoni@epitech.eu>
** 
** Started on  Tue Mar 21 18:35:32 2017 Lucas Santoni
** Last update Tue Mar 21 18:35:32 2017 Lucas Santoni
*/

#include "mystd.h"

int	my_strncmp(const char *s1, const char *s2, int n)
{
  if (s1 == NULL || s2 == NULL)
    return (FAILURE);
  while (n > 0)
  {
    if (*s1 != *s2)
      return (*s1 - *s2);
    else if (*s2 == END_STR)
      return (SUCCESS);
    s1++;
    s2++;
    n--;
  }
  return (SUCCESS);
}
