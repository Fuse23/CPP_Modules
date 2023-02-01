NAME	=	serializer

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

SOURCES	=	main.cpp

OBJECTS	=	$(SOURCES:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJECTS)
			$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)

%.o:		%.cpp
			$(CC) $(FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJECTS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
