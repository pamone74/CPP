# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/31 13:42:32 by pamone            #+#    #+#              #
#    Updated: 2024/09/01 10:51:21 by pamone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	serialize
CC  = c++
CCFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Serializer.cpp

all:$(NAME)

$(NAME) : $(SRC)
	$(CC) $(CCFLAG) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)
fclean: clean

re:fclean all
.PHONY: all re clean fclean 