# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/29 12:07:32 by pamone            #+#    #+#              #
#    Updated: 2024/07/29 13:51:34 by pamone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal
CCFLAG = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = Animal.cpp  main.cpp Dog.cpp Cat.cpp WrongCat.cpp  WrongAnimal.cpp 

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CCFLAG) $(SRC) -o $(NAME)

clean: 
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re 
