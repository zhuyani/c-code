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

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*******************************\n");
	printf("******  1.play      0.exit*****\n");
	printf("*******************************\n");
}
void game()
{
	int guess = 0;
	int  ret = 0;
	ret=rand()%100+1;
	while (1)
	{
		printf("请猜数字:>");
		scanf_s("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess<ret)
		{
			printf("猜小了\n");

		}
		else
		{
			printf("恭喜你\n");
				break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do{
		menu();
		printf("请选择>:");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
		    game();
		    break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input );
	return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入I'm silly,就取消关机\n,请输入:>");
	scanf_s("%s", input);
	if (strcmp(input, "I'm silly") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
