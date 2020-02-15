// Rab1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

		//   1.	Цена на молоко.Фермер в начале каждой зимы повышает отпускную цену на молоко на p%,
		//а каждым летом – снижает на столько же процентов.Изменится ли цена на молоко и если да, 
		//то в какую сторону и на сколько через n лет ?

int main()
{
	const double price = 10.7;              /*цена на молоко*/
	const int n = 3;                        /*процент повышения или снижения цены*/
	double newprice = 10.7;                 /*новая цена*/
	int year = 0;                           /*кол-во лет*/
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

		//2.	Найти все натуральные числа от 1 до 1000, которые совпадают с последними 
		//разрядами своих квадратов, например: 25^2 = 625; 76^2 = 5676.
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



		//3.	Разработать функцию, которая возвращает наибольший общий делитель(НОД) двух целых 
		//положительных чисел n и m, с помощью алгоритма Евклида : пусть m больше либо равно n.Если n = 0,
		//то НОД(m, n) = m.Если n не равно нулю, то для чисел n, m и r, где r – остаток от деления m на n,
		//выполняется равенство НОД(m, n) = НОД(n, r).Например, НОД(15, 6) = НОД(6, 3) = НОД(3, 0) = 3.
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
