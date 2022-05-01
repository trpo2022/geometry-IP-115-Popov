#include <stdio.h>
#include <math.h>

float areaCircle(int r)
{
	return r*r*3.1415926535;
}
float areaTriangle(int ax, int ay, int bx, int by, int cx, int cy)
{
	return 0.5*(ax-cx)*(by-cy)-(bx-cx)*(ay-cy);
}
