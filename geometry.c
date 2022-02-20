#include <stdio.h>
#include <string.h>
int f(char name[50], int x, int y, int r)
{

}
int main()
{
	char name[50];
	int cx, cy, r;
	printf("enter the name of the shape\n");
	scanf("%s",&name);
	if (strcmp(name, "circle") != 0)
	{
		printf("incorrect data");
		return 0;
	}
	printf("see the coordinate y\n");
	scanf("%d",&cx);
	printf("see the coordinate x\n");
	scanf("%d",&cy);
	printf("enter the length of the radius\n");
	scanf("%d",&r);
	if (r <= 0)
	{
		printf("incorrect data");
		return 0;
	}
	printf("%s %d %d %d",name, cx, cy, r);
	return 0;
}
