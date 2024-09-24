# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/15 06:54:02 by pamone            #+#    #+#              #
#    Updated: 2024/09/15 06:54:04 by pamone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span
CC = c++
CCFLAG = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Span.cpp

all:$(NAME)

$(NAME) : $(SRC)
	$(CC) $(CCFLAG) $(SRC) -o $(NAME)
clean:
	rm -f $(NAME)
fclean: clean

re: fclean all

.PHONY: all re clean fclean