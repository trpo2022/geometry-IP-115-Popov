#include <stdlib.h>
#include "../src/lib-geometry/area.h"
#include "../src/lib-geometry/perimeter.h"
#include "../src/lib-geometry/touchCircles.h"
#include "../thirdparty/ctest.h"

CTEST(area, circle)
{
	   const int r = 3;

	   const int result = (int)areaCircle(r);
	   const int expected = 28;

	   ASSERT_EQUAL(expected, result);
}
CTEST(area, triangle)
{
	const int ax = 0,ay = 0,bx = 4,by = 0,cx = 0,cy = 4;

	const int result = (int)areaTriangle(ax,ay, bx,by, cx,cy);
	const int expected = 8;

	ASSERT_EQUAL(expected, result); 
}
CTEST(perimeter, circle)
{       
	const int r = 3;

	const int result = (int)perimeterCircle(r);
	const int expected = 18;

	ASSERT_EQUAL(expected, result);
}
CTEST(perimeter,  triangle)
{       
	const int ax = 0,ay = 0,bx = 4,by = 0,cx = 0,cy = 3;

	const int result = (int)perimeterTriangle(ax,ay, bx,by, cx,cy);
	const int expected = 12;

	ASSERT_EQUAL(expected, result);

}
CTEST(touch, circle)
{       
	const int x1 = 0, y1 = 0, r1 = 10, x2 = 0, y2 = 5, r2 = 10;

        const int result = touchCircles(x1, y1, r1, x2, y2, r2);
        const int expected = 1;
        
	ASSERT_EQUAL(expected, result);
} 

