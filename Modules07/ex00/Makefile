# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/31 16:41:25 by pamone            #+#    #+#              #
#    Updated: 2024/08/31 16:42:15 by pamone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever
CC = c++
CCFLAG = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp 

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CCFLAG) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)
fclean: clean

re: fclean all

.PHONY: fclean all clean re