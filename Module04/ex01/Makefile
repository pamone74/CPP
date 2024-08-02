# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/29 12:07:32 by pamone            #+#    #+#              #
#    Updated: 2024/07/31 18:50:52 by pamone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animalBrain
CCFLAG = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC_DIR =  /workspaces/CPP/Module04/ex01/
SRC = $(SRC_DIR)/Animal/Animal.cpp  main.cpp \
	  $(SRC_DIR)/Dog/Dog.cpp \
	  $(SRC_DIR)/Cat/Cat.cpp \
	  $(SRC_DIR)/WrongCat/WrongCat.cpp \
      $(SRC_DIR)/WrongAnimal/WrongAnimal.cpp \
	  $(SRC_DIR)/Brain/Brain.cpp 

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CCFLAG) $(SRC) -o $(NAME)

clean: 
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re 
