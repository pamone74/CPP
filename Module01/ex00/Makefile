# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/13 20:24:08 by pamone            #+#    #+#              #
#    Updated: 2024/07/13 20:39:46 by pamone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnzzzZ
FLAG = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp Zombie.cpp  newZombie.cpp randomChump.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAG) $(SRC) -o $(NAME)
clean:
	rm -f $(NAME)
fclean: clean
re: fclean all
.PHONY: all clean fclean re.
