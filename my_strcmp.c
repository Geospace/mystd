/*
** my_strcmp.c for mystd in my_strcmp.c
** 
** Made by Lucas Santoni
** Login   <lucas.santoni@epitech.eu>
** 
** Started on  Tue Mar 21 18:45:07 2017 Lucas Santoni
** Last update Tue Mar 21 18:45:07 2017 Lucas Santoni
*/

#include "mystd.h"

int	my_strcmp(const char *s1, const char *s2)
{
  if (s1 == NULL || s2 == NULL)
    return (FAILURE);
  while (*s1 != END_STR && *s1 == *s2)
  {
    s1++;
    s2++;
  }
  return (*s1 - *s2);
}
