/*
** my_strdup.c for mystd in my_strdup.c
** 
** Made by Lucas Santoni
** Login   <lucas.santoni@epitech.eu>
** 
** Started on  Tue Mar 21 18:37:41 2017 Lucas Santoni
** Last update Tue Mar 21 18:37:41 2017 Lucas Santoni
*/

#include "mystd.h"

char	*my_strdup(const char *str)
{
  char	*dup;

  if (str == NULL)
    return (NULL);
  dup = my_calloc(my_strlen(str) + 1, sizeof(char));
  if (dup == NULL)
    return (NULL);
  my_strncpy(dup, str, my_strlen(str));
  return (dup);
}
