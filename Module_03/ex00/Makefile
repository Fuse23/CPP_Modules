NAME	=	clapTrap

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

$(RM)	=	rm -f

SOURCES	=	ClapTrap.cpp	main.cpp

OBJECTS	=	$(SOURCES:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJECTS)
			$(CC) $(FLAGS) $(OBJECTS) -I. -o $(NAME)

clean:
			$(RM) $(OBJECTS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
