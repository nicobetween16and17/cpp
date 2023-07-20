NAME	=	Polymorphism

all:	$(NAME)

$(NAME):
	c++ -Wall -Wextra -Werror -std=c++98 main.cpp Dog.cpp Cat.cpp Animal.cpp Brain.cpp -o $(NAME)

clean:
	rm -rf Dog.o Cat.o Animal.o Brain.o

fclean:	clean
	rm -rf $(NAME)

re: fclean all
