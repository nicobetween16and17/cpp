NAME	=	zombie

all:	$(NAME)

$(NAME):
	c++ -Wall -Wextra -Werror -std=c++98 Zombie.cpp main.cpp randomChump.cpp newZombie.cpp -o $(NAME)

clean:
	rm -rf zombie.o

fclean:	clean
	rm -rf $(NAME)

re: fclean all
