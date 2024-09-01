# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/31 13:15:54 by pamone            #+#    #+#              #
#    Updated: 2024/09/01 10:50:42 by pamone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
CPPFLAG = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp ScalarConverter.cpp

all : $(NAME)

$(NAME):$(SRC)
	$(CC) $(CPPFLAG) $(SRC) -o $(NAME)
clean:
	rm -rf $(NAME)
fclean: clean

re : fclean all

.PHONY: all clean flcean re