NAME = Weapon
CC = c++
CCFLAG = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp 

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CCFLAG) $(SRC) -o $(NAME)
clean:
	rm -rf $(NAME)
fclean: clean
	
re: clean all
.PHONY = all clean 
