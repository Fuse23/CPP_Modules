# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: falarm <falarm@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 20:52:49 by falarm            #+#    #+#              #
#    Updated: 2022/10/20 20:52:50 by falarm           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	HumanWeapon

SOURCES	=	Weapon.cpp	HumanA.cpp	HumanB.cpp	main.cpp

HEADERS	=	Weapon.hpp	HumanA.hpp	HumanB.hpp

OBJECTS	=	$(SOURCES:.cpp=.o)

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

.PHONY:		all		clean	fclean	re

all:		$(NAME)

$(NAME):	$(OBJECTS) $(HEADERS)
			$(CC) $(FLAGS) $(OBJECTS) -I. -o $(NAME)

clean:
			$(RM) $(OBJECTS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all