NAME = Bureaucrat
CC = c++
CCFLAG = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Bureaucrat.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CCFLAG) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)
fclean: clean

re: fclean all

.PHONY: fclean all clean re