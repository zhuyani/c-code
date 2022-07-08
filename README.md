# c-code
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			count++;
			printf("%d ", j);
		}
	}
	printf("%d\n", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int year=0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("count=%d ", count);
    return 0;
}


#include<stdio.h>
int main()
{
	int m = 24;
	int n = 18;
	int r = 0;
	scanf_s("%d%d", &m, &n);
	while (m%n)
	{
		r = m%n;
		m = n;
		n = r;
	}
	printf("%d", n);
	return 0;

}


#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d\n", i);
	}
    return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d%d%d", &a,&b,&c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp= a;
		a = c;
		c=tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;

	}
		printf("%d %d %d", a, b, c);
	return 0;
}
