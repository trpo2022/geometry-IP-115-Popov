bin/geometry: obj/area.h
	gcc -Wall -Werror -o bin/geometry src/geometry-dir/geometry.c
obj/area.h:
	gcc -Wall -Werror -o obj/area.h src/lib-geometry/area.c
clean:
	rm bin/geometry
run:
	./bin/geometry
