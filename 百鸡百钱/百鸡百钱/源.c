#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	for (a = 0; a <=20 ; a++)
	{
		for (b = 0; b <= 33; b++)
		{
			c = 100 - a - b;
			if (15 * a + 9 * b + c == 300)
			{
				printf("%d %d %d\n", a, b, c);
			}
		}
	}
	return 0;
}