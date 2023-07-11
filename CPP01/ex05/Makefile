NAME	=	Harl

all:	$(NAME)

$(NAME):
	c++ -Wall -Wextra -Werror -std=c++98 main.cpp Harl.cpp -o $(NAME)

clean:
	rm -rf main.o Harl.o

fclean:	clean
	rm -rf $(NAME)

re: fclean all