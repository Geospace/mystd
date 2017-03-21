/*
** my_split.c for mystd in my_split.c
** 
** Made by Lucas Santoni
** Login   <lucas.santoni@epitech.eu>
** 
** Started on  Mon Mar 20 10:35:48 2017 Lucas Santoni
** Last update Mon Mar 20 10:35:48 2017 Lucas Santoni
*/

#include "mystd.h"

static int	not_a_separator(char *s, char **separators)
{
  int		i;

  if (*s == END_STR)
    return (1);
  i = 0;
  while (separators[i] != NULL)
  {
    if (my_strncmp(s, separators[i], my_strlen(separators[i])) == SUCCESS)
      return (my_strlen(separators[i]));
    i++;
  }
  return (0);
}

char	**my_str_to_wordtab(char *str, char **separators)
{
  char	**wordtab;
  int	word;
  int	i;
  int	j;
  int	add;

  wordtab = my_calloc(my_strlen(str) + 1, sizeof(char *));
  word = 0;
  i = 0;
  while (str[i] != END_STR)
  {
    j = 0;
    add = 0;
    while ((add = not_a_separator(str + i + j, separators)) == 0)
      j++;
    if (j != 0)
      my_strncpy(wordtab[word++] = my_calloc(j + 1, sizeof(char)), str + i, j);
    i += j + add - 1;
    if (str[i] != END_STR)
      i++;
  }
  wordtab[word] = NULL;
  return (wordtab);
}

char		**my_split(char *str, ...)
{
  va_list	args;
  char		**separators;
  char		**splited;
  char		*s;
  int		i;

  i = 0;
  separators = my_calloc(my_strlen(str) + 1, sizeof(char *));
  va_start(args, str);
  while ((s = va_arg(args, char *)) != NULL)
    separators[i++] = my_strdup(s);
  va_end(args);
  separators[i] = NULL;
  splited = my_str_to_wordtab(str, separators);
  i = 0;
  while (separators[i] != NULL)
    free(separators[i++]);
  free(separators);
  return (splited);
}
