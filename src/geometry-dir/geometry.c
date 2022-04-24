#include <stdio.h>
#include <math.h>
#include <string.h>
#include "../lib-geometry/area.h"

int main()
{
    char name[50];
    float rez;
    printf("Enter shape name (circle or triangle): ");
    scanf("%s", name);
    if (strcmp(name, "Circle") == 0 || strcmp(name, "circle") == 0)
    {
        int r;
        printf("Enter radius: ");
        scanf("%d", &r);
        if (r < 0) 
        {
            printf("Incorrect data.");
            return 0;
        }
        rez = areaCircle(r);
    }
    else if (strcmp(name, "Triangle") == 0 || strcmp(name, "triangle") == 0)
    {
        int a, b, c;
        printf("Enter hand: ");
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        if (a+b < c || a+c < b || c+b < a || a <= 0 || c <= 0 || b <= 0)
        {
            printf("Incorrect data.");
            return 0;
        }
        rez = areaTriangle(a, b, c);
    }
    else
    {
        printf("Incorrect data.");
        return 0;
    }
    printf("area is: %f", rez);
    return 0;
}

