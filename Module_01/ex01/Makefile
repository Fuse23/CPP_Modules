# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: falarm <falarm@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 20:50:09 by falarm            #+#    #+#              #
#    Updated: 2022/10/20 20:50:10 by falarm           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ZombieHorde

SOURCES	=	Zombie.cpp	zombieHorde.cpp		main.cpp

OBJECTS	=	$(SOURCES:.cpp=.o)

HEADER	=	Zombie.hpp

CC		=	c++
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
