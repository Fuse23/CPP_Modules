NAME	=	harl

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

SOURCES	=	Harl.cpp	main.cpp

OBJECTS	=	$(SOURCES:.cpp=.o)

HEADERS	=	Harl.hpp

all:		$(NAME)

$(NAME):	$(OBJECTS)
			$(CC) $(FLAGS) $(OBJECTS) -I. -o $(NAME)

clean:
			$(RM) $(OBJECTS)

fclean:		clean
			$(RM) $(NAME)

re:			fclaen all

.PHONY:		all claen fclean re
