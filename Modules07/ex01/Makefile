# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/31 13:15:54 by pamone            #+#    #+#              #
#    Updated: 2024/09/01 10:54:21 by pamone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01
CPPFLAG = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp 

all : $(NAME)

$(NAME):$(SRC)
	$(CC) $(CPPFLAG) $(SRC) -o $(NAME)
clean:
	rm -rf $(NAME)
fclean: clean

re : fclean all

.PHONY: all clean flcean re