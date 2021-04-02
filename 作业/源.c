#include<stdio.h>//标准的输入输出流
#include<stdlib.h>//system("pause")要用
int main(void)
{
	int a[99][99]; int i, j, n;
	printf("请输入你是几阶矩阵\n");
	scanf_s("%d", &n);
	printf("请分别输入你的矩阵的元素\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)//将利用两层for循环将二阶矩阵的元素读入
		{
			scanf_s("%d", &a[i][j]);
		}
	}//第一个for循环代表行，第二个for循环代表列
	int max = a[0][0];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];//如果矩阵有有元素比max大，那么矩阵的max就定义为新的那个更大的元素
			}
		}
	}
	//得到矩阵中最大的数就是max了
	printf("最大的数为%d", max);//输出矩阵中最大的数max
	system("pause");////将黑色窗口停留，用户按任意键后才会退出
	return 0;//程序正常运行要返回一个0
}


////#include<stdio.h>
////#include<stdlib.h>
////int fibon(int m);
////int main(void)
////{
////	int n;
////	printf("请输入你的数字\n");
////	scanf_s("%d", &n);
////	int m = fibon(n);
////	printf("%d", m);
////	system("pause");
////	return 0;
////}
////int fibon(int m)
////{
////	if (m == 1)
////	{
////		 m==1;
////	}
////	else if(m==0)
////	{
////		m = 0;
////	}
////	else
////	{
////		m = fibon(m - 1) + fibon(m - 2);
////	}
////	return m;
////}


//#include<stdio.h>
//int main(void)
//{
//	int month, year, day;
//	int sum = 0;
//	printf("请输入你的年月日:\n");
//	scanf_s("%d%d%d", &year, &month, &day);
//	switch (month)
//	{
//	case 1:sum = 0; break;
//	case 2:sum = 31; break;
//	case 3:sum = 59; break;
//	case 4:sum = 90; break;
//	case 5:sum = 120; break;
//	case 6:sum = 151; break;
//	case 7:sum = 181; break;
//	case 8:sum = 212; break;
//	case 9:sum = 243; break;
//	case 10:sum = 273; break;
//	case 11:sum = 304; break;
//	case 12:sum = 334; break;
//	default: break;
//	}
//	sum += day;
//	if (year % 4 == 0 && year % 100 != 0 || month > 2 && year % 400 == 0)
//		sum++;
//	printf("%d", sum);
//}


////#define _CRT_SECURE_NO_WARNINGS
////#include<stdio.h>
////#include<stdlib.h>
////#include<string.h>
////#define len 100
////#define N 5
///oid func(char name[][100], int k);
//////数到k退出
////int main(void)
////{
////	int idx = -1, out = 0, count = 0, n,k;
////	int i = 0; char name[len][len];
////	printf("请分别输入他们的名字\n");
////	for (i = 0; i < N; i++)
////	{
////		scanf_s("%s", name[i], len);
////	}
////	printf("请输入数到几退出\n");
////	scanf_s("%d", &k);
////	func(name, k);
////	system("pause");
////	return 0;
////
////}
///oid func(char name[][100], int k)
////{
////	int idx = -1, out = 0, count = 0; int i = 0;
////	while (out < N)//当死亡的人数小于总人数
////		//就结束循环条件，（即需要所有的人都退出）
////	{
////		idx++;//数组的索引，当索引到最后一个元素的时候，将她的下表置为0
////		if (idx == N)
////		{
////			idx = 0;
////		}
////		if (strcmp(name[idx], "\0") == 0)//表示该人已经退出了
////		{
////			continue;//就开始下一轮（跳过下面的全部部分，重新执行外面的for循环的部分）
////			//即从下一个人开始（进入下一论循环）
////		}
////		else
////		{
////			count++;
////			if (count == k)
////			{
////				out++;
////				printf("第%d个退出循环的是%s\n", out, name[idx]);
////				strcpy(name[idx], "\0");//将她的名字置为'\0'
////				//以便下一次可以通过这个条件来判断这个人是否还在循环中
////				count = 0;//重新计数
////
////			}
////		}
////	}
////}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define len 100
//oid func(int k, char str[][len]);
//#define N 5
//int main(void)
//{
//	int k = 0; char str[len][len];
//	printf("请输入数到几退出\n");
//	scanf_s("%d", &k);
//	printf("请输入他们的名字\n");
//	for (int i = 0; i < N; i++)
//	{
//		scanf_s("%s", str[i], len);
//	}
//	func(k,str);
//	system("pause");
//	return 0;
//}
// oid func(int k, char str[][len])
//{
//	
//	int idx = -1, out=0, count = 0;
//	while (out < N)
//	{
//		idx++;
//		if (idx == N)
//		{
//			idx = 0;
//		}
//		if (strcmp(str[idx], "\0") == 0)
//		{
//			continue;
//		}
//		else
//		{
//			count++;
//			if (count == k)
//			{
//				out++;
//				printf("第%d退出的是%s\n", out, str[idx]);
//				count = 0;
//				strcpy(str[idx], "\0");
//				//注意一定要用双引号
//				//由strcmp的参数和strcpy的参数决定
//			}
//		}
//	}
//}


////#include<stdio.h>
////#include<stdlib.h>
////#define n 10
////int main(void)
////{
////
////	int a[10]; int i = 0, j; int index = 0,t;
////	printf("请输入十个元素\n");
////	for (i = 0; i < n; i++)
////	{
////		scanf_s("%d", &a[i]);
////	}
////	for (i = 0; i < n-1; i++)
////	{
////		index = i;
////		for (j = i + 1; j < n; j++)
////		{
////			if (a[j] > a[index])
////			{
////				index = j;
////		    }
////			
////		}
////		if (index != i)
////		{
////			t = a[index];
////			a[index] = a[i];
////			a[i] = t;
////		}
////	}
////	for (i = 0; i < 10; i++)
////	{
////		printf("%d\t", a[i]);
////	}
////	system("pause"); 
////	return 0;
////}


//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>//数组和列表和序列的区别
//int main(void)
//{
//	int i;
//	int m, n;//注意这个必须是int类型
//	for (i = 0; i < 100000; i++)
//	{
//		m = sqrt(i + 100);
//		n = sqrt(i + 268);
//		if (m * m == i + 100 && n * n == i + 268)
//		{
//			printf("%d\t", i);
//		}
//
//	}
//	system("pause");
//	return 0;
//		
//}


/*#include <stdio.h>
#define MAXCHAR 101  /*最大允许字符串长度

int char_to_num(char ch);  /*返回字符对应的数字
char num_to_char(int num);  /*返回数字对应的字符
long source_to_decimal(char temp[], int source);  /*返回由原数转换成的10进制数
int decimal_to_object(char temp[], long decimal_num, int object);  /*返回转换成目标数制后字符数组的长度
void output(char temp[], int length);  /*将字符数组逆序打印
int main()
{
	int source;  /*存储原数制
	int object;  /*存储目标数制
	int length;  /*存储转换成目标数制后字符数组的长度
	long decimal_num;  /*存储转换成的10进制数
	char temp[MAXCHAR];  /*存储待转换的数值和转换后的数值
	int flag = 1;  /*存储是否退出程序的标志
	while (flag)  /*利用输入的flag值控制循环是否结束
	{
		printf("转换前的数是：");
		scanf_s("%s", temp);
		printf("转换前的数制是：");
		scanf_s("%d", &source);
		printf("转换后的数制是：");
		scanf_s("%d", &object);
		printf("转换后的数是：");
		decimal_num = source_to_decimal(temp, source);
		length = decimal_to_object(temp, decimal_num, object);
		output(temp, length);
		printf("继续请输入1,否则输入0：\n");
		scanf("%d", &flag);
	}

	return 0;
}
/*将字符转换成数字*
int char_to_num(char ch)
{
	if (ch >= '0' && ch <= '9')
		return ch - '0';  /*将数字字符转换成数字
	else
		return ch - 'A' + 10;  /*将字母字符转换成数字
}
char num_to_char(int num)
{
	if (num >= 0 && num <= 9)
		return (char)('0' + num - 0);  /*将0~9之间的数字转换成字符
	else
		return (char)('A' + num - 10);  /*将大于10的数字转换成字符
}
long source_to_decimal(char temp[], int source)
{
	long decimal_num = 0;  /*存储展开之后的和
	int length;
	int i;
	for (i = 0; temp[i] != '\0'; i++);
	length = i;
	for (i = 0; i <= length - 1; i++)  /*累加
		decimal_num = (decimal_num * source) + char_to_num(temp[i]);
	return decimal_num;
}
int decimal_to_object(char temp[], long decimal_num, int object)
{
	int i = 0;
	while (decimal_num)
	{
		temp[i] = num_to_char(decimal_num % object);  /*求出余数并转换为字符
		decimal_num = decimal_num / object;  /*用十进制数除以基数
		i++;
	}
	temp[i] = '\0';
	return i;
}
void output(char temp[], int length)
{
	int i;
	for (i = length - 1; i >= 0; i--)  /*输出temp数组中的值
		printf("%c", temp[i]);
	printf("\n");
}

void Shellsort(int a[], int n) {
	int increment, i, j, tmp;
	for (increment = n / 2; increment > 0; increment /= 2) {
		for (i = increment; i < n; i++) {
			tmp = a[i];
			for (j = i; j >= increment && a[j - increment] > tmp; j -= increment)
				a[j] = a[j - increment];
			a[j] = tmp;
		}
	}
}*/


//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int main(void)
//{
//	int n; int sum = 0;
//	printf("请输入一个整数\n");
//	scanf_s("%d", &n);
//	int i = 0, j;
//	for (j = 2; j <sqrt(n); j++)
//		{
//			if (n % j== 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(n))
//		{
//			printf("是一个素数");
//		}
//		else if(j<=sqrt(n))
//		{
//			printf("不是一个素数\n");
//		}
//	system("pause");
//	return 0;
//
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int main(void)
//{
//	double a, b, c;
//	double d=0;
//	double x1=0, x2=0;
//	printf("请输入你的一元二次方程的系数\n");
//	scanf_s("%lf%lf%lf", &a, &b, &c);
//	d = b * b - 4*a * c;
//	if (d < 0)
//	{
//		printf("没有实数根\n");
//		exit(0);
//	}
//	else if (d == 0)
//	{
//		x1 =x2= -b / 2*a;
//		printf("两个根相等，他们分别是%lf %lf\n", x1, x2);
//	}
//	else
//	{
//		x1 = (-b + sqrt(d)) / 2 * a;
//		x1 = (-b -sqrt(d)) / 2 * a;
//		printf("两个根分别是%lf %lf", x1, x2);
//	}
//	system("pause");
//	return 0;
//}
