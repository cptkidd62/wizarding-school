NAME = wizarding-school

CC = g++
CFLAGS = -Wall -Werror -Wextra
SRC_FOLDER = source
SRCS = _main.cpp

$(NAME): _main.o
	$(CC) $(CFLAGS) -o $(NAME) _main.o

_main.o: $(SRC_FOLDER)/_main.cpp
	$(CC) $(CFLAGS) -c $(SRC_FOLDER)/_main.cpp
