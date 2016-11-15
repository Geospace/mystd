/*
** my_strlen.c for mystd in my_strlen.c
** 
** Made by Lucas Santoni
** Login   <lucas.santoni@epitech.eu>
** 
** Started on  Tue Nov 15 13:51:16 2016 Lucas Santoni
** Last update Tue Nov 15 13:51:16 2016 Lucas Santoni
*/

int	my_strlen(char *s)
{
  int	i;

  i = 0;
  while(s[i] != '\0')
    i++;
  return (i);
}
