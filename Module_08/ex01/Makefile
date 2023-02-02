NAME	=	span

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

SOURCES	=	main.cpp	Span.cpp

OBJECTS	=	$(SOURCES:.cpp=.o)

HEADERS	=	Span.hpp

all:		$(NAME)

$(NAME):	$(OBJECTS)
			$(CC) $(FLAGS) $(OBJECTS) -I. -o $(NAME)

%.o:		%.cpp $(HEADERS)
			$(CC) $(FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJECTS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
