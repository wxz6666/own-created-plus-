#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<string.h>

int add (int x,int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int num1 = 6;
	int num2 = 8;
	int sum1 = 0;
	int sum2 = 0;
	int a = 5;
	int b = 4;
	sum1 = add(num1,num2);
	sum2 = add(a,b);
	printf("sum1 = %d\n",sum1);
	printf("sum2 = %d\n",sum2);

    return 0;
}
//int main ()
//{
//const int num = 33;
//num = 22;
//printf("%d\n",num);
//
//return 0;
//}
//enum Sex 
//{
//	Male,
//	Female,
//	Secret
//};
//int main ()
//{
//	printf("%d",Male);
//	printf("%d",Female);
//	printf("%d",Secret);
//
//return 0;
//}
//enum Color
//{Red,Yellow,Blue};
//int main()
//{
//	printf("%d\n",Red);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//return 0;
//}

//int main()
//{
//	printf("c:\test\32\test.c");
//	\32Ϊ�����˽�������
//	��32��Ϊ�˽������ִ����ʮ�������֣���ΪASCII���е���Ϣ����
//	�˽����е�32ת��Ϊʮ����Ϊ26��26��ASCII��ֵ��Ϊһ�����Ҽ�ͷ
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��?ѡ��(1/0)>;");
//	scanf("%d",& input);
//	if(input == 1)
//		printf("��offer\n");
//	else
//		printf("�ؼ��ֺ���");
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("��һ�д���\n");
//	while(line<20000)
//	{
//		printf("�����õ�%d\n",line);
//		line++;
//	
//	};
//	if(line>=20000)
//		printf("�ɹ��õ���offer\n");
//
//return 0;
//}