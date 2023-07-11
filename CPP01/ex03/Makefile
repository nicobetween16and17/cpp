NAME	=	UnnecessaryViolence

all:	$(NAME)

$(NAME):
	c++ -Wall -Wextra -Werror -std=c++98 main.cpp Weapon.cpp HumanA.cpp HumanB.cpp -o $(NAME)

clean:
	rm -rf main.o Weapon.o HumanA.o HumanB.o

fclean:	clean
	rm -rf $(NAME)

re: fclean all
