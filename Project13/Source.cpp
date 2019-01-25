#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
void task10()
{
	int  a[11] = { 0 };
	int  h[10] = { 0 };
	int e = 0;
	int r = 0;
	int  max1 = 0;
	int max2 = 0;
	int y;
	for (size_t i = 0; i < 11; i++)
	{
		a[i] = 1 + rand() % 100;

		if (a[i] > e)
		{
			max1 = i;
			e = a[i];
		}
		printf("%d\n", a[i]);
	}
	printf("\n----------\n");
	for (size_t i = 0; i < 10; i++)
	{
		h[i] = 1 + rand() % 100;
		if (h[i] > r)
		{
			max2 = i;
			r = h[i];
		}
		printf("%d\n", h[i]);
	}
	printf("\n-----+-----\n");
	y = h[max2];
	h[max2] = a[max2];
	a[max2] = y;
	printf("%d-%d-\n", max1, max2);
	for (size_t i = 0; i < 11; i++)
	{
		printf("%d\n", a[i]);
	}
	printf("\n-----------\n");
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d\n", h[i]);
	}
}
void task9()
{
	printf("делали");


}
void task8()
{
	int  a[11] = { 0 };
	int  h[10] = { 0 };
	int sum = 0;
	for (size_t i = 0; i < 11; i++)
	{
		a[i] = 1 + rand() % 100;
		
	}
	for (size_t i = 1 ;i < 10; i++)
	{
		sum = a[i + 1] - a[i];
		h[i] = sum;
		printf("%d\n-|%d|-\n", a[i], h[i]);
	}


}
void task7()
{
		int g;
		int a[14] = { 0 };
		int p = 8;


		for (size_t i = 0; i < 14; i++)
		{
			a[i] = 1 + rand() % 40;
			printf("A[%d] = %d\n", i, a[i]);
		}
		for (size_t i = 0; i < 14; i++)
		{
			if (a[i] < a[i - 1])
				printf("%d\n", i);
		}



}
void task6()
{
	printf("делали");

}
void task5()
{
	int g;
	int a[14] = { 0 };
	int p = 8;

	
	for (size_t i = 0; i < 14; i++)
	{
		a[i] = 1 + rand() % 40;
		
		
		printf("A[%d] = %d\n", i, a[i]);
	}

	int x = 0;
	int it = 0;
	for (int i = 0; i < 14 - 1; i++)
	{
		for (int j = 14 - 2; j >= i; j--)
		{
			if (a[j] >a[j + 1])
			{
				x = a[j];
				a[j] = a[j + 1];
				a[j + 1] = x;

				it++;
			}
		}
	}
	printf("\nAfter sorting\n");

	for (size_t i = 0; i < 14; i++)
	{
		printf("A[%d] = %d\n", i, a[i]);
	}
	for (size_t i = 0; i < 6; i++)
	{
		x = a[i];
			a[i] = a[p];
			a[p] = x;
			p++;
	}
	printf("\nAfter sorting\n");

	for (size_t i = 0; i < 14; i++)
	{
		printf("A[%d] = %d\n", i, a[i]);
	}

}
void task4()
{
	printf("делали");

}
void task3()
{
	int  a[8] = { 0 };
	int  h[8] = { 0 };
	int sum = 0;
	for (size_t i = 0; i < 8; i++)
	{
		a[i] = 1 + rand() % 100;
		sum = sum + a[i];
		h[i] = sum;
		printf("%d\n-%d-\n", a[i],h[i]);
	}

}
void task2()
{
	int  a[8] = { 0 };
	int max = 0;
	for (size_t i = 0; i < 8; i++)
	{
		a[i] = 1 + rand() % 100;
		if (a[i] % 2 != 0)
		{
			if (a[i] > max)
				max = a[i];
	   }
		printf("%d\n", a[i]);
	}
	printf("-%d-\n", max);
}
void task1()
{

	int  a[9] = { 0 };
	int  h[7] = { 0 };
	int  r[16] = { 0 };
	int e = 0;
	int  max1 = 0;
	int max2 = 0;
	int y;
	for (size_t i = 0; i < 9; i++)
	{
		a[i] = 1 + rand() % 100;

		
		printf("%d\n", a[i]);
	}
	printf("\n----------\n");
	for (size_t i = 0; i < 7; i++)
	{
		h[i] = 1 + rand() % 100;
		
		printf("%d\n", h[i]);
	}
	printf("\n----------\n");
	for (size_t i = 0; i < 9; i++)
	{
		r[e] = a[i];
		e++;
	}
	for (size_t i = 0; i < 9; i++)
	{
		r[e] = h[i];
		e++;
	}
	for (size_t i = 0; i < 16; i++)
	{
		printf("%d\n", r[i]);
	}
	int x = 0;
	int it = 0;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 14; j >= i; j--)
		{
			if (r[j] > r[j + 1])
			{
				x = r[j];
				r[j] = r[j + 1];
				r[j + 1] = x;

				it++;
			}
		}
	}
	printf("\nAfter sorting\n");

	for (size_t i = 0; i < 16; i++)
	{
		printf("A[%d] = %d\n", i, r[i]);
	}
	
}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		case 2: task2(); break;
		case 3: task3(); break;
		case 4: task4(); break;
		case 5: task5(); break;
		case 6: task6(); break;
		case 7: task7(); break;
		case 8: task8(); break;
		case 9: task9(); break;
		case 10: task10(); break;
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}