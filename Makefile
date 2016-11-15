##
## Makefile for  in Makefile
## 
## Made by Lucas Santoni
## Login   <lucas.santoni@epitech.eu>
## 
## Started on  Tue Nov 15 11:48:45 2016 Lucas Santoni
## Last update Tue Nov 15 11:48:45 2016 Lucas Santoni
##

CC	= gcc

CFLAGS	+= -Wall -Wextra -Werror -pedantic
CFLAGS	+= -g3

SRCS	= my_strncpy.c \
	  my_strncat.c \
	  my_strlen.c \
	  my_memset.c \
	  my_memcpy.c \
	  my_calloc.c \

OBJS	= $(SRCS:.c=.o)

RM	= rm -f

MAKELIB	= ar rc

NAME	= libmystd.a

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKELIB) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
