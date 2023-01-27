NAME	=	intern

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror

RM		=	rm -rf

SOURCES	=	Bureaucrat.cpp	AForm.cpp	main.cpp	\
			ShrubberyCreationForm.cpp				\
			RobotomyRequestForm.cpp					\
			PresidentialPardonForm.cpp				\
			Intern.cpp

OBJECTS	=	$(SOURCES:.cpp=.o)

HEADERS	=	Bureaucrat.hpp	AForm.hpp				\
			ShrubberyCreationForm.hpp				\
			RobotomyRequestForm.hpp					\
			PresidentialPardonForm.hpp				\
			Intern.hpp

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
