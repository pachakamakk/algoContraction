CC      = g++
CFLAGS  = -std=c++11
LDFLAGS =
HEADS   = graph.h base.h road.h
SRCS    = main.cc graph.cc graph_test.cc road.cc utils.cc
OBJS    = $(SRCS:.cc=.o)
EXEC    = server

all:            $(EXEC)

server:         $(OBJS)
                $(CC) -o $(EXEC) $(OBJS) $(LDFLAGS)

graph.o:        graph.cc
                $(CC) -o graph.o -c graph.cc $(CFLAGS)

graph_test.o:   graph_test.cc
                $(CC) -o graph_test.o -c graph_test.cc $(CFLAGS)

road.cc:        road.cc
                $(CC) -o road.o -c road.cc $(CFLAGS)

utils.cc:       utils.cc
                $(CC) -o utils.o -c utils.cc $(CFLAGS)

main.o:         main.cc $(HEADS)
                $(CC) -o main.o -c main.cc $(CFLAGS)

clean:          
                rm -rf *.o

fclean:         clean
                rm -rf $(EXEC)

.PHONY:         clean fclean