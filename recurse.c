#include <stdio.h>
int add (int a)
{
		int i = a;
		if (a < 0)
		{
				return 0;
		}
		add (a - 1);
		printf("%d\n", i);
return a + 1;
}

int add2 (int a)
{
int i = a;
for (i = 0; a > 0; i--)
{
		a--;
		printf("%d\n", a);
		printf("\n\n\t\t =======");
		printf("%d\n", i);
}
return a + 1;
}

int main (void)
{
		add(5);
		add2(5);
return 0;
}
