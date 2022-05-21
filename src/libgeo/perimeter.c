#include "perimeter.h"
#include <math.h>
#include <stdio.h>

float perimeterCircle(int r)
{
    return 2 * r * 3.1415926535;
}
float perimeterTriangle(int ax, int ay, int bx, int by, int cx, int cy)
{
    return sqrt(powf(fabs((float)(ax - bx)), 2)
                + powf(fabs((float)(ay - by)), 2))
            + sqrt(powf(fabs((float)(ax - cx)), 2)
                   + powf(fabs((float)(ay - cy)), 2))
            + sqrt(powf(fabs((float)(cx - bx)), 2)
                   + powf(fabs((float)(cy - by)), 2));
}
