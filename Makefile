CFLAGS = -Wall -Wextra -Werror -I../src/lib-geometry
CPPFLAGS = -MMD
CC = gcc
OBJ = obj/
SRC = src/
BIN = bin/
all: $(OBJ)geometry.o libarea.a
	$(CC) $(CFLAGS) -o $(BIN)geometry $(OBJ)geometry.o libarea.a
$(OBJ)area.o:
	$(CC) $(CFLAGS) -c $(CPPFLAGS) -o $(OBJ)area.o $(SRC)lib-geometry/area.c
libarea.a: $(OBJ)area.o
	ar rcs libarea.a $(OBJ)area.o
$(OBJ)geometry.o:
	$(CC) $(CFLAGS) -c $(CPPFLAGS) -o $(OBJ)geometry.o $(SRC)geometry-dir/geometry.c
clean:
	rm bin/geometry obj/*.o obj/*.d
run:
	./bin/geometry
-include geometry.d area.d
