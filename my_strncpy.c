/*
** my_strncpy.c for mystd in my_strncpy.c
** 
** Made by Lucas Santoni
** Login   <lucas.santoni@epitech.eu>
** 
** Started on  Tue Nov 15 13:42:45 2016 Lucas Santoni
** Last update Tue Nov 15 13:42:45 2016 Lucas Santoni
*/

char	*my_strncpy(char *s1, char *s2, int s)
{
  char	*tmp;

  tmp = s1;
  while (s-- && *s2 != '\0')
    *(tmp++) = *(s2++);
  while (s-- > 0)
    *(tmp++) = '\0';
  return (s1);
}
