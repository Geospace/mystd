/*
** my_memcpy.c for mystd in my_memcpy.c
** 
** Made by Lucas Santoni
** Login   <lucas.santoni@epitech.eu>
** 
** Started on  Tue Nov 15 16:04:35 2016 Lucas Santoni
** Last update Tue Nov 15 16:04:35 2016 Lucas Santoni
*/

void	*my_memcpy(void *d, void *s, int n)
{
  char	*dest;
  char	*src;

  dest = d;
  src = s;

  while (n--)
    *dest++ = *src++;
  return (dest);
}
