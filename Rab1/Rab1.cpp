// Rab1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

		//   1.	���� �� ������.������ � ������ ������ ���� �������� ��������� ���� �� ������ �� p%,
		//� ������ ����� � ������� �� ������� �� ���������.��������� �� ���� �� ������ � ���� ��, 
		//�� � ����� ������� � �� ������� ����� n ��� ?

int main()
{
	const double price = 10.7;              /*���� �� ������*/
	const int n = 3;                        /*������� ��������� ��� �������� ����*/
	double newprice = 10.7;                 /*����� ����*/
	int year = 0;                           /*���-�� ���*/
	char string[20];
	printf("Enter a number of years.\n");
	gets_s(string);
	int o = atoi(string);
	for (int i = 0; i < o; i++)
		{
		newprice = newprice + newprice*((double)(n) / 100);
		newprice = newprice - newprice*((double)(n) / 100);
		}
	printf("Price has chanded to %lf (%lf)\n", newprice, (newprice-price) );
	_flushall();
	getchar();
    return 0;
}

		//2.	����� ��� ����������� ����� �� 1 �� 1000, ������� ��������� � ���������� 
		//��������� ����� ���������, ��������: 25^2 = 625; 76^2 = 5676.
		//

//int firsttwo(int number);
//int lasttwo(int number);
//int kvadr(int number);
//
//int main()
//{
//for (int i = 10; i <= 1000; i++) 
//{
//	int q = kvadr(i);
//	if (firsttwo(i) == lasttwo(q))
//		printf("Bit Matches: %d - %d\n", i, q);
//}
//getchar();
//return 0;
//}
//
//int kvadr(int number) 
//{
//	return number*number;
//}
//
//int firsttwo(int number) 
//{
//	while (number > 100) 
//	{
//		number = number / 10;
//    }
//	return number;
//}
//
//int lasttwo(int number) 
//{
//	return (number % 100);
//}



		//3.	����������� �������, ������� ���������� ���������� ����� ��������(���) ���� ����� 
		//������������� ����� n � m, � ������� ��������� ������� : ����� m ������ ���� ����� n.���� n = 0,
		//�� ���(m, n) = m.���� n �� ����� ����, �� ��� ����� n, m � r, ��� r � ������� �� ������� m �� n,
		//����������� ��������� ���(m, n) = ���(n, r).��������, ���(15, 6) = ���(6, 3) = ���(3, 0) = 3.
		//

//int mas[2];
//int *p = mas;
//
//void evkl(int mas[2]);
//
//int main()
//{
//	mas[0] = 100;
//		mas[1] = 35;
//	evkl(mas);
//	printf("The least common divisor is = %d", (mas[1]+mas[0]));
//	getchar();
//return 0;
//}
//
//void evkl(int *mas) 
//{
//	int a = mas[0];
//	int b = mas[1];
//
//	while ((a != 0) && (b != 0))
//	{
//		if (a > b)
//		{
//			a = a%b;
//			mas[0] = a;
//		}
//		else
//		{
//			b = b%a;
//			mas[1] = b;
//		}
//	}
//}
