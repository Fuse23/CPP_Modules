# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: falarm <falarm@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 20:49:32 by falarm            #+#    #+#              #
#    Updated: 2022/10/20 20:49:35 by falarm           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Zombie

SOURCES	=	Zombie.cpp	newZombie.cpp	randomChump.cpp	\
			main.cpp

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
