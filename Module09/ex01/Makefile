# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 16:10:47 by pamone            #+#    #+#              #
#    Updated: 2024/10/16 16:14:39 by pamone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN
CC = 	c++ -std=c++98
CCFAG = -Wall -Wextra -Werror

SRC = main.cpp RPN.cpp
all: $(NAME)

$(NAME):$(SRC)
	$(CC) $(CCFAG) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)
fclean: clean
re : fclean all
.PHONY: all fclean re clean 