/*
** my_strncat.c for mystd in my_strncat.c
** 
** Made by Lucas Santoni
** Login   <lucas.santoni@epitech.eu>
** 
** Started on  Tue Nov 15 16:42:23 2016 Lucas Santoni
** Last update Tue Nov 15 16:42:23 2016 Lucas Santoni
*/

char	*my_strncat(char *d, char *s, int n)
{
  while (*d != '\0')
    d++;
  while(n-- > 0 && *s != '\0')
    *d++ = *s++;
  *d++ = '\0';
  return (d);
}
