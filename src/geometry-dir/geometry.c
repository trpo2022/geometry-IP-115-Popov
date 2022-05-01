#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include "../lib-geometry/area.h"
#include "../lib-geometry/perimeter.h"


int main()
{


	float rezArea, rezPerimeter;

	char name[50];
	printf("Enter shape name (circle or triangle): ");
	scanf("%s", name);
	name[0] = toupper(name[0]);

	if (!(strcmp(name, "Circle")))
	{
		int x, y, r;
		printf("Enter (x y radius): ");
		scanf("%d", &x);
		scanf("%d", &y);
		scanf("%d", &r);
		if (r < 0)
		{
			printf("Incorrect data.");
			return 0;
		}
		rezArea = areaCircle(r);
		rezPerimeter = perimeterCircle(r);
	}
	else if (!(strcmp(name, "Triangle")))
	{
		int ax, ay, bx, by, cx, cy;
		printf("Enter the coordinates of the sides (ax ay bx by cx cy): ");
		scanf("%d", &ax);
		scanf("%d", &ay);
		scanf("%d", &bx);
		scanf("%d", &by);
		scanf("%d", &cx);
		scanf("%d", &cy);
		rezArea = areaTriangle(ax, ay, bx, by, cx, cy);
		rezPerimeter = perimeterTriangle(ax, ay, bx, by, cx, cy);
		if (rezArea <= 0) {
			printf("Incorrect data.");
			return 0;
		}
	}
	else {
		printf("Incorrect data.");
		return 0;
	}
	printf("area is: %f\n perimeter is: %f", rezArea, rezPerimeter);
	return 0;
}
