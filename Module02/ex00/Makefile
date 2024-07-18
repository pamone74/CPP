# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/16 07:49:06 by pamone            #+#    #+#              #
#    Updated: 2024/07/16 09:20:38 by pamone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
CC = c++
CCFLAG = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp  Fixed.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CCFLAG) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)
fclean: clean

re: fclean all
