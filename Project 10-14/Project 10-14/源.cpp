#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//�Զ��庯���������ҳ����������еĽϴ�ֵ

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


//memset����

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	puts(arr);
//	return 0;
//}


//strcpy����

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



//�ػ�����

//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60 ������һ�����ڹػ�
//	//system() ִ��ϵͳ����
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ��Խ���һ���Ӻ�ػ����������:��������ȡ���ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)//�Ƚ������ַ���
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
//	//shutdown -s -t 60 ������һ�����ڹػ�
//	//system() ִ��ϵͳ����
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���һ���Ӻ�ػ����������:��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)//�Ƚ������ַ���
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//goto��� ���׳�bug

//int main()
//{
//	printf("Hello\n");
//	goto again;
//	printf("���\n");
//again:
//	printf("hehe\n");
//	return 0;
//}