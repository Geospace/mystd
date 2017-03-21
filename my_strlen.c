/*
** my_strlen.c for mystd in my_strlen.c
** 
** Made by Lucas Santoni
** Login   <lucas.santoni@epitech.eu>
** 
** Started on  Tue Nov 15 13:51:16 2016 Lucas Santoni
** Last update Tue Nov 15 13:51:16 2016 Lucas Santoni
*/

#include "mystd.h"

int	my_strlen(const char *s)
{
  int	i;

  if (s == NULL)
    return (FAILURE);
  i = 0;
  while (s[i] != END_STR)
    i++;
  return (i);
}
