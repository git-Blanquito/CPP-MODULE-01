# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aiblanco <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/10 23:05:13 by aiblanco          #+#    #+#              #
#    Updated: 2024/06/10 23:05:21 by aiblanco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie_Attack
CFLAGS = -Wall -Wextra -Werror
FILES = main.cpp
COMPILED_FILES = main.o
OBJ = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	g++ -o $(NAME) $(CFLAGS) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
