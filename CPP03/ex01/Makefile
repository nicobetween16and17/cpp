NAME	=	ScavTrap

all:	$(NAME)

$(NAME):
	c++ -Wall -Wextra -Werror -std=c++98 main.cpp ClapTrap.cpp ScavTrap.cpp -o $(NAME)

clean:
	rm -rf ClapTrap.o ScavTrap.o

fclean:	clean
	rm -rf $(NAME)

re: fclean all
