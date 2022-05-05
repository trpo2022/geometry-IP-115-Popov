#include "libgeo/area.h"
#include "libgeo/perimeter.h"
#include "libgeo/touchCircles.h"
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float rezArea, rezPerimeter;
    char name[50];
    printf("Enter shape name (circle or triangle): ");
    scanf("%s", name);
    name[0] = toupper(name[0]);

    if (!(strcmp(name, "Circle"))) {
        int x, y, r;
        printf("Enter (x y radius): ");
        scanf("%d", &x);
        scanf("%d", &y);
        scanf("%d", &r);
        if (r < 0) {
            printf("Incorrect data.");
            return 0;
        }
        rezArea = areaCircle(r);
        rezPerimeter = perimeterCircle(r);
        printf("area is: %f\nperimeter is: %f\n", rezArea, rezPerimeter);

        char name1[50];
        printf("Enter shape name (circle): ");
        scanf("%s", name1);
        name1[0] = toupper(name1[0]);

        if (!(strcmp(name1, "Circle"))) {
            int x1, y1, r1;
            printf("Enter (x y radius): ");
            scanf("%d", &x1);
            scanf("%d", &y1);
            scanf("%d", &r1);
            if (r1 < 0) {
                printf("Incorrect data.");
                return 0;
            }
            rezArea = areaCircle(r1);
            rezPerimeter = perimeterCircle(r1);
            printf("area is: %f\nperimeter is: %f\n", rezArea, rezPerimeter);

            if (touchCircles(x, y, r, x1, y1, r1)) {
                printf("Circles intersect");
            } else {
                printf("Circles don't overlap");
            }
        } else {
            printf("Incorrect data.");
            return 0;
        }
    } else if (!(strcmp(name, "Triangle"))) {
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
        if (rezArea <= 0.0) {
            printf("Incorrect data.");
            return 0;
        } else {
            printf("area is: %f\nperimeter is: %f\n", rezArea, rezPerimeter);
        }
    } else {
        printf("Incorrect data.");
        return 0;
    }
    return 0;
}
