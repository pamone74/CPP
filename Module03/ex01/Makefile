# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/20 20:22:33 by pamone            #+#    #+#              #
#    Updated: 2024/07/24 11:10:16 by pamone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap
CCFLAG = -Wall -Wextra -Werror -std=c++98
CC  = c++
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp 
all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CCFLAG) $(SRC) -o $(NAME)

clean:
	 rm -rf $(NAME)
fclean: clean

re: fclean all

.PHONY : all clean re fclean