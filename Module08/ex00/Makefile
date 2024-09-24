# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/14 10:57:53 by pamone            #+#    #+#              #
#    Updated: 2024/09/14 11:41:58 by pamone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind 
CCFLAG = -Wall -Wextra -Werror -std=c++98
CC     = c++

SRC  = main.cpp 

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CCFLAG) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)
fclean: clean

re: fclean all
.PHONY: all re clean fclean 