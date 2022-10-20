# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: falarm <falarm@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 20:50:41 by falarm            #+#    #+#              #
#    Updated: 2022/10/20 20:50:46 by falarm           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	String

SOURCE	=	main.cpp

OBJECTS	=	$(SOURCE:.cpp=.o)

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

.PHONY	=	all	clean	fclean	re

all:		$(NAME)

$(NAME):	$(OBJECTS)
			$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
			$(RM) $(OBJECTS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
