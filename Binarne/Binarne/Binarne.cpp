#include <iostream>
using namespace std;



int main()
{
	int szukana;
	int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, };
	int pozycja;
A:
	int l, p, sr;
	l = 0;
	p = 15;
	sr = (l + p) / 2;



	cout << "Jaka liczbe chcesz znalezc: ";
	cin >> szukana;



	while (l <= p)
	{
		if (tab[sr] == szukana)
		{
			cout << "liczba " << szukana << " jest w " << sr;
			return 0;
		}
		if (tab[sr] > szukana)
		{
			p = sr - 1;
		}
		else
		{
			l = sr + 1;
		}
		sr = (l + p) / 2;
	}
	cout << "nie ma takiej liczby";
}