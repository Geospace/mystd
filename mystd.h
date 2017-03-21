/*
** mystd.h for mystd in mystd.h
** 
** Made by Lucas Santoni
** Login   <lucas.santoni@epitech.eu>
** 
** Started on  Tue Nov 15 11:47:14 2016 Lucas Santoni
** Last update Tue Nov 15 11:47:14 2016 Lucas Santoni
*/

#pragma once

/*
** Dependencies
*/
#include <stdlib.h>
#include <stdarg.h>
#include "common.h"

/*
** Strings
*/
int			my_strlen(const char *);
char			*my_strncpy(char *, const char *, int);
char			*my_strncat(char *, const char *, int);
int			my_strncmp(const char *, const char *, int);
char			*my_strdup(const char *str);

/*
** Memory
*/
void			*my_calloc(int, int);
void			my_memset(void *, const char, int);
void			*my_memcpy(void *, void *, int);
