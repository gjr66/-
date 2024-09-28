#include<stdio.h>
#include<math.h>
int main()
{
	long a, i,d[10] = { 0 };
	printf("«Î ‰»Î ˝◊÷");
	scanf("%d", &a);
	while (a)
	{
		i = a % 10;
		d[i]++;
		a = a / 10;
	}
	for ( i = 0; i < 10; i++)
	{
		printf("%d\t", i);
	}
	printf("\n");
	for ( i = 0; i < 10; i++)
	{
		printf("%d\t", d[i]);
	}
	return 0;
}
