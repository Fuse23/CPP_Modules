NAME	=	megaphone

SOURSE	=	megaphone.cpp
OBJECTS	=	$(SOURSE:.cpp=.o)

CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

.PHONY:	all clean fclaen re

all:		$(NAME)

$(NAME):	$(OBJECTS)
			$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
			@$(RM) $(OBJECTS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclaen all

test:		all
			./$(NAME) "shhhhh... I think the students are asleep..." | cat -e
			@echo SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
			./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off." | cat -e
			@echo DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
			./$(NAME) | cat -e
			@echo "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

