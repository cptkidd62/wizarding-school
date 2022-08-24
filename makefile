
CC = g++
CFLAGS = -Wall -g
LIBS = -lsfml-graphics -lsfml-window -lsfml-system
SRCS = source/_main.cpp source/App.cpp
OBJS = $(SRCS:.c=.o)
MAIN = wizarding-school

all: $(MAIN)

$(MAIN): $(OBJS) 
		$(CC) $(CFLAGS) -o $(MAIN) $(OBJS) $(LIBS)

.c.o:	$(CC) $(CFLAGS) -c $<  -o $@

clean:	$(RM) *.o *~ $(MAIN)
