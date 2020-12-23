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
//	\32为两个八进制数字
//	是32作为八进制数字代表的十进制数字，作为ASCII码中的信息出现
//	八进制中的32转化为十进制为26，26在ASCII码值中为一个向右箭头
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗?选择(1/0)>;");
//	scanf("%d",& input);
//	if(input == 1)
//		printf("好offer\n");
//	else
//		printf("回家种红薯");
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("敲一行代码\n");
//	while(line<20000)
//	{
//		printf("正在敲第%d\n",line);
//		line++;
//	
//	};
//	if(line>=20000)
//		printf("成功拿到好offer\n");
//
//return 0;
//}