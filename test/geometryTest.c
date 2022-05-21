#include <ctest.h>
#include <libgeo/area.h>
#include <libgeo/perimeter.h>
#include <libgeo/touchCircles.h>
#include <stdlib.h>

CTEST(geometry_suite, circle_1)
{
    const int r = 3;

    const int result = areaCircle(r);
    const int expected = 28;

    ASSERT_EQUAL(expected, result);
}
CTEST(geometry_suite, triangle_1)
{
    const int ax = 0, ay = 0, bx = 4, by = 0, cx = 0, cy = 4;

    const int result = areaTriangle(ax, ay, bx, by, cx, cy);
    const int expected = 16;

    ASSERT_EQUAL(expected, result);
}
CTEST(geometry_suite, circle_2)
{
    const int r = 3;

    const int result = perimeterCircle(r);
    const int expected = 18;

    ASSERT_EQUAL(expected, result);
}
CTEST(geometry_suite, triangle_2)
{
    const int ax = 0, ay = 0, bx = 4, by = 0, cx = 0, cy = 3;

    const int result = perimeterTriangle(ax, ay, bx, by, cx, cy);
    const int expected = 12;

    ASSERT_EQUAL(expected, result);
}
CTEST(geometry_suite, circle_3)
{
    const int x1 = 0, y1 = 0, r1 = 10, x2 = 0, y2 = 5, r2 = 10;

    const int result = touchCircles(x1, y1, r1, x2, y2, r2);
    const int expected = 1;

    ASSERT_EQUAL(expected, result);
}
