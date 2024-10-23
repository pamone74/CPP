# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/21 10:59:47 by pamone            #+#    #+#              #
#    Updated: 2024/10/21 11:45:15 by pamone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe
CC = 	c++ -std=c++98
CCFAG = -Wall -Wextra -Werror

SRC = main.cpp PmergeMe.cpp
all: $(NAME)

$(NAME):$(SRC)
	$(CC) $(CCFAG) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)
fclean: clean
re : fclean all
.PHONY: all fclean re clean 