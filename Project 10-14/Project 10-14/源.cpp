#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//自定义函数：可以找出两个整数中的较大值

int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a = 35;
	int b = 21;
	int max = get_max(a, b);
	printf("max = %d\n", max);
	return 0;
}


//memset函数

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	puts(arr);
//	return 0;
//}


//strcpy函数

//int main()
//{
//	char arr1[] = "siuuuu";
//	char arr2[20] = "######";
//	strcpy(arr2, arr1);
//	printf("%s\n",arr2);
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}



//关机程序

//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60 电脑在一分钟内关机
//	//system() 执行系统命令
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑将在一分钟后关机，如果输入:我是猪，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)//比较两个字符串
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60 电脑在一分钟内关机
//	//system() 执行系统命令
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在一分钟后关机，如果输入:我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)//比较两个字符串
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//goto语句 容易出bug

//int main()
//{
//	printf("Hello\n");
//	goto again;
//	printf("你好\n");
//again:
//	printf("hehe\n");
//	return 0;
//}