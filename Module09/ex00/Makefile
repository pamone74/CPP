# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 02:04:52 by pamone            #+#    #+#              #
#    Updated: 2024/09/24 02:04:57 by pamone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CCFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = main.cpp BitcoinExchange.cpp
NAME = btc

all: $(NAME)

$(NAME): $(SOURCES)
	$(CC) $(CCFLAGS) $(SOURCES) -o $(NAME)

clean:
	rm -f $(NAME)
fclean: clean

re: fclean all

.PHONY: all re fclean clean
