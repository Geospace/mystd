/*
** my_strncat.c for mystd in my_strncat.c
** 
** Made by Lucas Santoni
** Login   <lucas.santoni@epitech.eu>
** 
** Started on  Tue Nov 15 16:42:23 2016 Lucas Santoni
** Last update Tue Nov 15 16:42:23 2016 Lucas Santoni
*/

#include "mystd.h"

char	*my_strncat(char *d, const char *s, int n)
{
  if (d == NULL || s == NULL || n <= 0)
    return (NULL);
  while (*d != END_STR)
    d++;
  while (n-- > 0 && *s != END_STR)
    *d++ = *s++;
  *d++ = END_STR;
  return (d);
}
