# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/15 17:37:47 by etermeau          #+#    #+#              #
#    Updated: 2015/06/24 16:40:33 by etermeau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = indentify 

CC = clang++

HEADER = includes/

DIRSRC = srcs/

FLAGS = -Wall -Wextra -Werror

SRC = main.cpp \

OBJ = $(SRC:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) $^

%.o: $(DIRSRC)%.cpp
	@$(CC) $(FLAGS) -o $@ -c $< -I$(HEADER)

clean:
	@rm -f $(OBJ)
	@echo "\033[4;32mDeleted\033[0;33m $(OBJ)\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[4;32mDeleted\033[0;33m $(NAME)\033[0m"

re: fclean all

