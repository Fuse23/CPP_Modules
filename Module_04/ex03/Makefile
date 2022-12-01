NAME	=	Materia

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -f

SOURCES	=	main.cpp	AMateria.cpp	Character.cpp			\
			Ice.cpp		Cure.cpp		MateriaSource.cpp

OBJECTS	=	$(SOURCES:.cpp=.o)


HEADERS	=	AMateria.hpp	Character.hpp	ICharacter.hpp		\
			Ice.hpp			Cure.hpp		MateriaSource.hpp	\
			IMateriaSource.hpp

.cpp.o:
			$(CC) $(FLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJECTS) $(HEADERS)
			$(CC) $(FLAGS) -o $(NAME) $(OBJECTS)

clean:
			$(RM) $(OBJECTS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
