//Напишите эффективную программу, находящую все числа длины n являющиеся палиндромами.В комментариях напишите, почему перебор - эффективный

#include <iostream>
#include <cmath>
using namespace std;
int n = 0;
int chislo = 0;
 
int main()
{
	cin >> n;
	if (n % 2 == 0)
	{
		for (int i = pow(10, n / 2 - 1); i < pow(10, n / 2); i++)
		{
			int m = i;
			chislo = i;
			for (int j = 1; j <= n / 2; j++)
				{
					chislo = chislo * 10 + (m % 10);
					m = m / 10;
				}
			cout << chislo;
			cout << endl;
		}
	}
	else 
	{
		for (int i = pow(10, n / 2); i < pow(10, n / 2 + 1); i++)
		{
			int m = i / 10;
			chislo = i;
			for (int j = 1; j <= n / 2; j++)
			{
				chislo = chislo * 10 + (m % 10);
				m = m / 10;
			}
			cout << chislo;
			cout << endl;
		}
	}
}
	

//Данный алгоритм перебирает и выводит только палиндромы и не затрагивает остальные числа.