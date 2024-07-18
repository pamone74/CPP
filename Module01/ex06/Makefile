# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/15 11:32:28 by pamone            #+#    #+#              #
#    Updated: 2024/07/15 12:59:30 by pamone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter
CC = c++
CCFLAG = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp  Harl.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CCFLAG) $(SRC) -o $(NAME)
clean:
	rm -rf $(NAME)
fclean: clean
	
re: clean all
.PHONY = all clean 
