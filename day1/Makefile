CC      = g++
CFLAGS  = -std=c++11
LDFLAGS =
HEADS   = graph.h base.h road.h node.h
SRCS    = main.cc graph.cc road.cc utils.cc node.cc
OBJS    = $(SRCS:.cc=.o)
EXEC    = server

all:            $(EXEC)

server:         $(OBJS) $(HEADS)
				$(CC) -o $(EXEC) $(OBJS) $(CFLAGS) $(LDFLAGS)

graph.o:        graph.cc
				$(CC) -o graph.o -c graph.cc $(CFLAGS)

road.o:			road.cc
				$(CC) -o road.o -c road.cc $(CFLAGS)

utils.o:		utils.cc
				$(CC) -o utils.o -c utils.cc $(CFLAGS)
				
node.o:			node.cc
				$(CC) -o node.o -c node.cc $(CFLAGS)

main.o:         main.cc
				$(CC) -o main.o -c main.cc $(CFLAGS)

clean:          
				rm -rf *.o

fclean:         clean
				rm -rf $(EXEC)

.PHONY:         clean fclean