# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/18 03:55:02 by pamone            #+#    #+#              #
#    Updated: 2024/09/24 01:51:32 by pamone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutantstack

cc = C++
CPPFLAG = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp 

all: $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CPPFLAG) $(SRC) -o $(NAME)

clean: 
	rm -rf $(NAME)
fclean: clean

re: fclean all
.PHONY: all re clean fclean