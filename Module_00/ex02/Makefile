NAME	=	Account

SOURSE	=	Account.cpp	\
			tests.cpp

HEADERS	=	Account.hpp

OBJECTS	=	$(SOURSE:.cpp=.o)

CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

.PHONY:	all clean fclaen re

all:		$(NAME)

$(NAME):	$(OBJECTS)
			$(CC) $(FLAGS) $(OBJECTS) -I. -o $(NAME)

clean:
			@$(RM) $(OBJECTS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclaen all