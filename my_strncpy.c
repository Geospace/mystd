/*
** my_strncpy.c for mystd in my_strncpy.c
** 
** Made by Lucas Santoni
** Login   <lucas.santoni@epitech.eu>
** 
** Started on  Tue Nov 15 13:42:45 2016 Lucas Santoni
** Last update Tue Nov 15 13:42:45 2016 Lucas Santoni
*/

#include "mystd.h"

char	*my_strncpy(char *s1, const char *s2, int s)
{
  char	*tmp;

  if (s1 == NULL || s2 == NULL || s <= 0)
    return (NULL);
  tmp = s1;
  while (s-- && *s2 != END_STR)
    *(tmp++) = *(s2++);
  while (s-- > 0)
    *(tmp++) = END_STR;
  return (s1);
}
