NAME	=	ClapTrap

all:	$(NAME)

$(NAME):
	c++ -Wall -Wextra -Werror -std=c++98 main.cpp ClapTrap.cpp -o $(NAME)

clean:
	rm -rf ClapTrap.o

fclean:	clean
	rm -rf $(NAME)

re: fclean all
