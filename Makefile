# SRC = $(wildcard ./ft*.c)
SRC = ft_strlen.c
OBJS = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
RM = rm -f

###################################################################

all:	$(NAME)

$(NAME):    $(OBJS)
	ar -rcs $@ $<

%.o:	%.c
	gcc -c $(CFLAGS) $< -o $@

clean:		
	$(RM) $(OBJS)

fclean:	clean	
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
