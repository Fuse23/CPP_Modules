NAME	=	Zombie

SOURSES	=	Zombie.cpp	newZombie.cpp	randomChump.cpp	\
			main.cpp

OBJECTS	=	$(SOURSES:.cpp=.o)

HEADER	=	Zombie.hpp

CC		=	g++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

.PHONY:		all		clean	fclean	re

all:		$(NAME)

$(NAME):	$(OBJECTS) $(HEADER)
			$(CC) $(FLAGS) $(OBJECTS) -I. -o $(NAME)

clean:
			$(RM) $(OBJECTS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
