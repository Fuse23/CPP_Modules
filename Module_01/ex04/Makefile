NAME	=	Replacer

CC		=	g++
FLAGS	=	-Wall -Wextra -Werror

SOURCE	=	main.cpp

OBJECTS	=	$(SOURCE:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJECTS)
			$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
			$(RM) $(OBJECTS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
