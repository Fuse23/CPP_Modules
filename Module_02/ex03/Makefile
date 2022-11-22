NAME	=	a.out

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

SOURCES	=	Fixed.cpp	Point.cpp	bsp.cpp		main.cpp

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
