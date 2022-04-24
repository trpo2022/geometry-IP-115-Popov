CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -MMD
CC = gcc
OBJ = obj/
SRC = src/
BIN = bin/
all: geometry.o area.o
	$(CC) $(CFLAGS)  -o $(BIN)geometry $(OBJ)geometry.o $(OBJ)area.o
geometry.o:
	$(CC) $(CFLAGS) -c $(CPPFLAGS) -o $(OBJ)geometry.o $(SRC)geometry-dir/geometry.c
area.o:
	$(CC) $(CFLAGS) -c $(CPPFLAGS) -o $(OBJ)area.o $(SRC)lib-geometry/area.c
clean:
	rm bin/geometry
run:
	./bin/geometry
-include geometry.d area.d
