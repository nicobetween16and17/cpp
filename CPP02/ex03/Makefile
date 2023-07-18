NAME	=	bsp

all:	$(NAME)

$(NAME):
	c++ -Wall -Wextra -Werror -std=c++98 main.cpp Fixed.cpp Point.cpp -o $(NAME)

clean:
	rm -rf Fixed.o Point.o

fclean:	clean
	rm -rf $(NAME)

re: fclean all
