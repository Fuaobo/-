#include<stdio.h>//��׼�����������
#include<stdlib.h>//system("pause")Ҫ��
int main(void)
{
	int a[99][99]; int i, j, n;
	printf("���������Ǽ��׾���\n");
	scanf_s("%d", &n);
	printf("��ֱ�������ľ����Ԫ��\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)//����������forѭ�������׾����Ԫ�ض���
		{
			scanf_s("%d", &a[i][j]);
		}
	}//��һ��forѭ�������У��ڶ���forѭ��������
	int max = a[0][0];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];//�����������Ԫ�ر�max����ô�����max�Ͷ���Ϊ�µ��Ǹ������Ԫ��
			}
		}
	}
	//�õ�����������������max��
	printf("������Ϊ%d", max);//���������������max
	system("pause");////����ɫ����ͣ�����û����������Ż��˳�
	return 0;//������������Ҫ����һ��0
}


////#include<stdio.h>
////#include<stdlib.h>
////int fibon(int m);
////int main(void)
////{
////	int n;
////	printf("�������������\n");
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
//	printf("���������������:\n");
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
//////����k�˳�
////int main(void)
////{
////	int idx = -1, out = 0, count = 0, n,k;
////	int i = 0; char name[len][len];
////	printf("��ֱ��������ǵ�����\n");
////	for (i = 0; i < N; i++)
////	{
////		scanf_s("%s", name[i], len);
////	}
////	printf("�������������˳�\n");
////	scanf_s("%d", &k);
////	func(name, k);
////	system("pause");
////	return 0;
////
////}
///oid func(char name[][100], int k)
////{
////	int idx = -1, out = 0, count = 0; int i = 0;
////	while (out < N)//������������С��������
////		//�ͽ���ѭ��������������Ҫ���е��˶��˳���
////	{
////		idx++;//����������������������һ��Ԫ�ص�ʱ�򣬽������±���Ϊ0
////		if (idx == N)
////		{
////			idx = 0;
////		}
////		if (strcmp(name[idx], "\0") == 0)//��ʾ�����Ѿ��˳���
////		{
////			continue;//�Ϳ�ʼ��һ�֣����������ȫ�����֣�����ִ�������forѭ���Ĳ��֣�
////			//������һ���˿�ʼ��������һ��ѭ����
////		}
////		else
////		{
////			count++;
////			if (count == k)
////			{
////				out++;
////				printf("��%d���˳�ѭ������%s\n", out, name[idx]);
////				strcpy(name[idx], "\0");//������������Ϊ'\0'
////				//�Ա���һ�ο���ͨ������������ж�������Ƿ���ѭ����
////				count = 0;//���¼���
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
//	printf("�������������˳�\n");
//	scanf_s("%d", &k);
//	printf("���������ǵ�����\n");
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
//				printf("��%d�˳�����%s\n", out, str[idx]);
//				count = 0;
//				strcpy(str[idx], "\0");
//				//ע��һ��Ҫ��˫����
//				//��strcmp�Ĳ�����strcpy�Ĳ�������
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
////	printf("������ʮ��Ԫ��\n");
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
//#include<math.h>//������б�����е�����
//int main(void)
//{
//	int i;
//	int m, n;//ע�����������int����
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
#define MAXCHAR 101  /*��������ַ�������

int char_to_num(char ch);  /*�����ַ���Ӧ������
char num_to_char(int num);  /*�������ֶ�Ӧ���ַ�
long source_to_decimal(char temp[], int source);  /*������ԭ��ת���ɵ�10������
int decimal_to_object(char temp[], long decimal_num, int object);  /*����ת����Ŀ�����ƺ��ַ�����ĳ���
void output(char temp[], int length);  /*���ַ����������ӡ
int main()
{
	int source;  /*�洢ԭ����
	int object;  /*�洢Ŀ������
	int length;  /*�洢ת����Ŀ�����ƺ��ַ�����ĳ���
	long decimal_num;  /*�洢ת���ɵ�10������
	char temp[MAXCHAR];  /*�洢��ת������ֵ��ת�������ֵ
	int flag = 1;  /*�洢�Ƿ��˳�����ı�־
	while (flag)  /*���������flagֵ����ѭ���Ƿ����
	{
		printf("ת��ǰ�����ǣ�");
		scanf_s("%s", temp);
		printf("ת��ǰ�������ǣ�");
		scanf_s("%d", &source);
		printf("ת����������ǣ�");
		scanf_s("%d", &object);
		printf("ת��������ǣ�");
		decimal_num = source_to_decimal(temp, source);
		length = decimal_to_object(temp, decimal_num, object);
		output(temp, length);
		printf("����������1,��������0��\n");
		scanf("%d", &flag);
	}

	return 0;
}
/*���ַ�ת��������*
int char_to_num(char ch)
{
	if (ch >= '0' && ch <= '9')
		return ch - '0';  /*�������ַ�ת��������
	else
		return ch - 'A' + 10;  /*����ĸ�ַ�ת��������
}
char num_to_char(int num)
{
	if (num >= 0 && num <= 9)
		return (char)('0' + num - 0);  /*��0~9֮�������ת�����ַ�
	else
		return (char)('A' + num - 10);  /*������10������ת�����ַ�
}
long source_to_decimal(char temp[], int source)
{
	long decimal_num = 0;  /*�洢չ��֮��ĺ�
	int length;
	int i;
	for (i = 0; temp[i] != '\0'; i++);
	length = i;
	for (i = 0; i <= length - 1; i++)  /*�ۼ�
		decimal_num = (decimal_num * source) + char_to_num(temp[i]);
	return decimal_num;
}
int decimal_to_object(char temp[], long decimal_num, int object)
{
	int i = 0;
	while (decimal_num)
	{
		temp[i] = num_to_char(decimal_num % object);  /*���������ת��Ϊ�ַ�
		decimal_num = decimal_num / object;  /*��ʮ���������Ի���
		i++;
	}
	temp[i] = '\0';
	return i;
}
void output(char temp[], int length)
{
	int i;
	for (i = length - 1; i >= 0; i--)  /*���temp�����е�ֵ
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
//	printf("������һ������\n");
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
//			printf("��һ������");
//		}
//		else if(j<=sqrt(n))
//		{
//			printf("����һ������\n");
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
//	printf("���������һԪ���η��̵�ϵ��\n");
//	scanf_s("%lf%lf%lf", &a, &b, &c);
//	d = b * b - 4*a * c;
//	if (d < 0)
//	{
//		printf("û��ʵ����\n");
//		exit(0);
//	}
//	else if (d == 0)
//	{
//		x1 =x2= -b / 2*a;
//		printf("��������ȣ����Ƿֱ���%lf %lf\n", x1, x2);
//	}
//	else
//	{
//		x1 = (-b + sqrt(d)) / 2 * a;
//		x1 = (-b -sqrt(d)) / 2 * a;
//		printf("�������ֱ���%lf %lf", x1, x2);
//	}
//	system("pause");
//	return 0;
//}
