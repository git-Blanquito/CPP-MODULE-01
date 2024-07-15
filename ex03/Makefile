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

NAME = Humans_Weapons
library.h = HumanA.hpp HumanB.hpp Weapon.hpp
CFLAGS = -Wall -Wextra -Werror
FILES = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
COMPILED_FILES = HumanA.o HumanB.o Weapon.o main.o
OBJ = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(library.h) $(OBJ)
	g++ -g -o $(NAME) $(CFLAGS) $(OBJ) $(library.h)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
