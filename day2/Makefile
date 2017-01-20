CC      = g++
CFLAGS  = -std=c++11
LDFLAGS =
HEADS   = base.h dijkstra.h graph.h parse_csv.h
SRCS    = main.cc dijkstra.cc graph.cc parse_csv.cc
OBJS    = $(SRCS:.cc=.o)
EXEC    = server

all:            $(EXEC)

server:         $(OBJS) $(HEADS)
				$(CC) -o $(EXEC) $(OBJS) $(CFLAGS) $(LDFLAGS)

dijkstra.o:     dijkstra.cc
				$(CC) -o dijkstra.o -c dijkstra.cc $(CFLAGS)
				
graph.o:		graph.cc
				$(CC) -o graph.o -c graph.cc $(CFLAGS)

parse_csv.o:	parse_csv.cc
				$(CC) -o parse_csv.o -c parse_csv.cc $(CFLAGS)

main.o:         main.cc
				$(CC) -o main.o -c main.cc $(CFLAGS)

clean:          
				rm -rf *.o

fclean:         clean
				rm -rf $(EXEC)

.PHONY:         clean fclean