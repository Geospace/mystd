/*
** common.h for mystd in common.h
** 
** Made by Lucas Santoni
** Login   <lucas.santoni@epitech.eu>
** 
** Started on  Tue Mar 21 18:21:10 2017 Lucas Santoni
** Last update Tue Mar 21 18:21:10 2017 Lucas Santoni
*/

#pragma once

/*
** ...But what is a failure ?
*/
#define SUCCESS		(0)
#define FAILURE		(-1)

/*
** Could have been something else
*/
# define ERROR		(84)

/*
** Useful defines
*/
# define STD_INPUT	(0)
# define STD_OUTPUT	(1)
# define ERR_OUTPUT	(2)
# define END_STR	'\0'
# define NEW_LINE	'\n'
# define EOF		(-1)
# define NULL		((void *)0)

/*
** Quick booleans implementation
*/
typedef enum	e_bool
{
  false,
  true
}		t_bool;
