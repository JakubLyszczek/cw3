#include <time.h>
#include <iostream>
using namespace std;

int main()
{
	//zadanie1
	/*
	int i = 0;
	int y = 0;
	cout << "podaj liczbe: ";
	cin >> y;

	while (y > 0)
	{
		cout << i << endl ;
		i++;
		y--;
	}
	*/

	//zadanie2
	/*
	int i = 0;
	cout << "podawaj liczby ";
	while (i >= 0)
	{
		cin >> i;
	}
	cout << "liczba jest mniejsza od 0";
	*/

	//zadanie3
	/*
	int a, ile_ujemnych=0, ile_dodatnich=0, suma_d=0, suma_u=0;
	int tab1[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> tab1[i];
		if (tab1[i] >= 0)
		{
			ile_dodatnich++;
			suma_d += tab1[i];
		}
		else
		{
			ile_ujemnych++;
			suma_u += tab1[i];
		}
	}
	cout << "dodatnie: " << ile_dodatnich << endl;
	cout << "ujemne: " << ile_ujemnych << endl;
	cout << "suma dodatnich: " << suma_d<< endl;
	cout << "suma ujemnch; " << suma_u << endl;
	*/

	//zadanie4
	/*
	int n, a, suma=0, iloczyn=1;
	cout << "podaj n ";
	cin >> n;

	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "Podaj liczbe: ", cin >> a;
			if (a % 2 == 0)
			{
				suma += a;
				iloczyn *= a;
			}

		}
		cout << "suma = " << suma << endl;
		cout << "iloczyn = " << iloczyn << endl;
	}

	else
		cout << "n musi byc wieksze od 0";

	*/
	//zadanie5

	/*
	srand(time(NULL));
	int n, a, suma = 0, iloczyn = 1;
	cout << "podaj n ";
	cin >> n;

	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			a = rand() % 56 - 5;
			cout << a << " ";
			if (a % 2 == 0)
			{
				suma += a;
				iloczyn *= a;
			}

		}
		cout << "suma = " << suma << endl;
		cout << "iloczyn = " << iloczyn << endl;
	}

	else
		cout << "n musi byc wieksze od 0";
	*/

	//zadanie1.2
	/*
	int n = 0, a, i = 0, suma = 0;
	float srednia = 0;

	cout << "podaj liczbe studentow: ";
	cin >> n;
	while (i < n)
	{
		cout << "podaj punkty ";
		cin >> a;
		suma += a;
		i++;
	}

	srednia = suma / n;
	cout << "srednia to: " << srednia;
	*/

	//zadanie2.2

	/*
	int n = 0, a, i = 0, suma = 0;
	float srednia = 0;

	cout << "podaj liczbe studentow: \n";
	cin >> n;
	while (i < n)
	{
		start:
		cout << "podaj punkty w przedziale 0-100 \n";
		cin >> a;
		if (a < 101 && a > -1)
		{
			suma += a;

		}
		else
		{
			cout << "bledna wartosc, podaj ponownie ";
			goto start;
		}
		i++;
	}

	srednia = suma / n;
	cout << "srednia to: " << srednia;
	*/

	//zadanie3.2

	/*
		int n = 0, a, i = 0, suma = 0;
		float srednia = 0;

		cout << "podaj liczbe studentow: \n";
		cin >> n;
		while (true)
		{
			i++;
			cout << "podaj punkty w przedziale 0-100 \n";
			cin >> a;
			if (a < 101 && a > -1)
			{
				suma += a;
				continue;
			}
			break;
		}

		srednia = suma / n;
		cout << "srednia to: " << srednia;
	*/ 
	
	//zadanie4.2
	/*
	int n = 0, a, i = 0, suma = 0;
	float srednia = 0;

	cout << "podaj liczbe studentow: \n";
	cin >> n;
	do
	{
		i++;
		cout << "podaj punkty w przedziale 0-100 \n";
		cin >> a;
		if (a < 101 && a > -1)
		{
			suma += a;
			continue;
		}
		break;
	} while (true);

	srednia = suma / n;
	cout << "srednia to: " << srednia;
	*/

	//zadanie5.2
	
	//a

	/*
	for (int i = 1; i <= 100; i++)
	{
	cout << i << " ";
	}
	*/

	//b
	
	/*
	for (int i = 100; i>=0; i--)
	{
		cout << i << " ";
	}
	*/

	//C
	
	/*
	for (int i = 7; i<=77; i+=7)
	{
		cout << i << " ";
	}
	*/

	//d

	for (int i = 20; i>=0; i -= 2)
	{
		cout << i << " ";
	}
	}

