/*
** mystd.h for mystd in mystd.h
** 
** Made by Lucas Santoni
** Login   <lucas.santoni@epitech.eu>
** 
** Started on  Tue Nov 15 11:47:14 2016 Lucas Santoni
** Last update Tue Nov 15 11:47:14 2016 Lucas Santoni
*/

#ifndef MYSTD_H_
#define MYSTD_H_

int			my_strlen(char *);
void			my_memset(void *, char, int);
char			*my_strncpy(char *, char *, int);
char			*my_strncat(char *, char *, int);
void			*my_memcpy(void *, void *, int);
void			*my_calloc(int, int);
int			my_atoi(char *);
long int		my_atol(char *);
unsigned int		my_atou(char *);
unsigned long int	my_atoul(char *);

#endif /* !MYSTD_H_ */
