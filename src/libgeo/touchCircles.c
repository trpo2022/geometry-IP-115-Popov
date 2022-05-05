#include <stdio.h>
#include <math.h>
#include "touchCircles.h"

int touchCircles(int x1, int y1, int r1, int x2, int y2, int r2)
{
	int l;
	l = sqrt(powf(fabs((float)(x1-x2)), 2) + powf(fabs((float)(y1-y2)), 2));
	if (l <= r1+r2 && l >= fabs((float)(r1-r2))) return 1;
	return 0;
} 
