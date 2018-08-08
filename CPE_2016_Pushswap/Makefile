##
## Makefile for Makefile in /home/jeremy.elkaim/CPE_2016_Pushswap
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Tue Nov 22 20:51:35 2016 jeremy elkaim
## Last update Tue Nov 22 20:51:50 2016 jeremy elkaim
##

NAME    = push_swap

SRC    = push_swap.c

OBJ    = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		gcc $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean:			clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:			all clean fclean re
