#include <stdio.h>

int fpb(int x, int y)
{
	if (y != 0)
		return fpb(y, x%y);
    else 
		return x;
}

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n",fpb(x,y));
	return 0;
}
