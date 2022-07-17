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
#include<stdio.h>
int get_max(int x, int y)
{
	return(x > y) ? (x) : (y);
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = get_max(num1, num2);
	printf("max=%d\n", max);
	return 0;
}
void swap2(int* px, int*py)
{
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int num1= 1;
	int num2 = 2;
	swap2(&num1, &num2);
	printf("swap2:num1=%d num2=%d\n", num1, num2);
	return 0;
}
int qiurunnian(int y)
{
	if ((y % 4 == 0 && y % 100 == 0) || (y % 400 == 0))
	{
		printf("是闰年");
	}
	else
	{
		printf("不是闰年");
	}
}
int main()
{
	int n;
	scanf_s("%d", &n);
	int ret =qiurunnian(n);
	return 0;

}
void three_line()
{
	printf("hehe\n");
}
void three_line()
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		new_line();
	}
}
int main()
{
	three_line();
	return 0;
}
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
}
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int num = 1234;
	print(num);
	return 0;
}
int strlen(const char *y)
{
	if (*y == '\0')
		return 0;
	else
		return 1 + strlen(y+1);
}
int main()
{
	char *p = "abcdef";
	int len=strlen(p);
	printf("%d\n", len);
	return 0;
}
#include<stdio.h>
int get_max(int x, int y)
{
	return(x > y) ? (x) : (y);
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = get_max(num1, num2);
	printf("max=%d\n", max);
	return 0;
}
#include<stdio.h>
void swap2(int* px, int*py)
{
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int num1= 1;
	int num2 = 2;
	swap2(&num1, &num2);
	printf("swap2:num1=%d num2=%d\n", num1, num2);
	return 0;
}
#include<stdio.h>
int qiurunnian(int y)
{
	if ((y % 4 == 0 && y % 100 == 0) || (y % 400 == 0))
	{
		printf("是闰年");
	}
	else
	{
		printf("不是闰年");
	}
}
int main()
{
	int n;
	scanf_s("%d", &n);
	int ret =qiurunnian(n);
	return 0;

}
#include<stdio.h>
void three_line()
{
	printf("hehe\n");
}
void three_line()
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		new_line();
	}
}
int main()
{
	three_line();
	return 0;
}
#include<stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
}
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int num = 1234;
	print(num);
	return 0;
}
#include<stdio.h>
int strlen(const char *y)
{
	if (*y == '\0')
		return 0;
	else
		return 1 + strlen(y+1);
}
int main()
{
	char *p = "abcdef";
	int len=strlen(p);
	printf("%d\n", len);
	return 0;
}
#include<stdio.h>
int main()
{
	int i;
	scanf_s("%d", &i);
	if (i % 2 !=0)
	{
		printf("这个数是奇数\n");
	}
	else
	{
		printf("次数不是奇数\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i = 0;
	while (i <= 10)
	{
		printf("%d ", i);
		i = i + 1;
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i = 0;
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i = i + 1;
	}
	return 0;
}
#include<stdio.h>
int main()
{
    int i = 0;
    while (i <= 10)
   {
		i = i + 1;
	if (i == 5)
	continue;
	printf("%d ", i);
	}
return 0;
}
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	return 0;

}
#include<stdio.h>
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
		k++;
	printf("%d ", k);
		return 0;

}
#include<stdio.h>
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i = i + 1;
	} while (i <= 10);
	return 0;
}
#include<stdio.h>
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i = i + 1;
	} while (i <= 10);
	return 0;
}
#include<string.h>
int main()
{
	int i = 0;
	char arr[10] = { 0 };
	for (i = 1; i <= 3; i++)
	{
		printf("请输入密码—>");
		scanf_s("%s", arr);
		if (strcmp(arr,"123456")==0)
		{
			printf("密码正确，登陆成功");
			break;
		}
		else
		{
			printf("密码错误，请重新登录");
		}
	}
	if (i == 3)
		printf("三次密码均错误，退出系统");
	return  0;

}
#include<stdio.h>
int main()
{
	int i;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf_s("%s", password);
		if (password == "123456")
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误，重新输入！\n");
		}
	}
	if (i == 3)
		printf("三次密码均错误，退出程序\n");

	return 0;
}
#include<stdio.h>
int main()
{
	int k;
	int c = 0;
	for (k = 1; k < 3; k++)
		switch (k)
		{
		default:c += k;
		case 2:c++; break;
		case 4:c += 2; break;
		}
	printf("%d", c);


	return 0;
}





