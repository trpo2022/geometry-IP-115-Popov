#include <stdio.h>
#include <math.h>

float areaCircle(int r)
{
    return r*r*3.1415926535;
}
float areaTriangle(int a, int b, int c)
{
    float p;
    p = (a+b+c)/2;
    return p*(p-a)*(p-b)*(p-c);
}

