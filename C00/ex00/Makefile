NAME = megaphone

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

CC = c++

RM = rm -rf

SRCS = *.cpp

all	:	$(NAME)

$(NAME): $(SRCS)
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)
