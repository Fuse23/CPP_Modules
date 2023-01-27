NAME	=	Bureaucrat

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror

RM		=	rm -rf

SOURCES	=	Bureaucrat.cpp	main.cpp

OBJECTS	=	$(SOURCES:.cpp=.o)

HEADERS	=	Bureaucrat.hpp

all:		$(NAME)

$(NAME):	$(OBJECTS)
			$(CC) $(FLAGS) $(OBJECTS) -I. -o $(NAME)

%.o:		%.cpp $(HEADERS)
			$(CC) $(FLAGS) -c $< -o $@

claen:
			$(RM) $(OBJECTS)

fclean:		claen
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all	fclean	claen	re
