NAME = clap
CCFLAG = -Wall -Wextra -Werror -std=c++98
CC  = c++
SRC = main.cpp ClapTrap.cpp
all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CCFLAG) $(SRC) -o $(NAME)

clean:
	rm $(NAME)
fclean: clean

re: fclean clean

.PHONY : all clean re fclean