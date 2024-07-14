# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/13 20:42:49 by pamone            #+#    #+#              #
#    Updated: 2024/07/13 20:42:50 by pamone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde
CC = c++
CCFLAG = -Wall -Wextra -Werror -std=c++98
SRC = zombieHorde.cpp Zombie.cpp main.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CCFLAG) $(SRC) -o $(NAME)
clean:
	rm -rf $(NAME)
fclean: clean
	
re: clean all
.PHONY = all clean 
