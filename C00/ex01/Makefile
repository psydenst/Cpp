NAME = phonebook

SRCS = *.cpp

INCLUDE = -I includes

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

CC = c++

RM = rm -rf

$(NAME): $(SRCS)
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

