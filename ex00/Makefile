# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/15 09:45:31 by etermeau          #+#    #+#              #
#    Updated: 2015/06/15 14:16:46 by etermeau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FLAGS = -Wall -Wextra -Werror -g

SRC = megaphone.cpp

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) -o $(NAME) $(SRC)

clean:
	rm -f megaphone.o

fclean: clean
	rm -f $(NAME)

re: fclean all
