CFLAGS = -Wall -Wextra -Werror -I../src/lib-geometry
CPPFLAGS = -MMD
CC = gcc
OBJ = obj/
SRC = src/
BIN = bin/
all: $(OBJ)geometry.o $(OBJ)libarea.a
	$(CC) $(CFLAGS) -o $(BIN)geometry $(OBJ)geometry.o $(OBJ)libarea.a -lm
$(OBJ)area.o:
	$(CC) $(CFLAGS) -c $(CPPFLAGS) -o $(OBJ)area.o $(SRC)lib-geometry/area.c
$(OBJ)perimeter.o:
	$(CC) $(CFLAGS) -c $(CPPFLAGS) -o $(OBJ)perimeter.o $(SRC)lib-geometry/perimeter.c
$(OBJ)touchCircles.o:
	$(CC) $(CFLAGS) -c $(CPPFLAGS) -o $(OBJ)touchCircles.o $(SRC)lib-geometry/touchCircles.c
$(OBJ)libarea.a: $(OBJ)area.o $(OBJ)perimeter.o $(OBJ)touchCircles.o
	ar rcs $(OBJ)libarea.a $(OBJ)area.o $(OBJ)perimeter.o $(OBJ)touchCircles.o
$(OBJ)geometry.o:
	$(CC) $(CFLAGS) -c $(CPPFLAGS) -o $(OBJ)geometry.o $(SRC)geometry-dir/geometry.c
clean:
	rm bin/geometry obj/*.o obj/*.d obj/*.a 
run:
	./bin/geometry
-include geometry.d area.d perimeter.d touchCircles.d
