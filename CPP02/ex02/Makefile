NAME	=	Fpn3

all:	$(NAME)

$(NAME):
	c++ -Wall -Wextra -Werror -std=c++98 main.cpp Fixed.cpp -o $(NAME)

clean:
	rm -rf Fixed.o

fclean:	clean
	rm -rf $(NAME)

re: fclean all
