# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/20 20:22:33 by pamone            #+#    #+#              #
#    Updated: 2024/07/24 11:14:25 by pamone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap
CCFLAG = -Wall -Wextra -Werror -std=c++98
CC  = c++
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp utils.cpp FragTrap.cpp
all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CCFLAG) $(SRC) -o $(NAME)

clean:
	 rm -rf $(NAME)
fclean: clean

re: fclean all

.PHONY : all clean re fclean