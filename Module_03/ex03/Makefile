NAME	=	diamondTrap

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

$(RM)	=	rm -f

SOURCES	=	ClapTrap.cpp	ScavTrap.cpp	FragTrap.cpp	DiamondTrap.cpp		main.cpp

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
