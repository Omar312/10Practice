#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
	
	setlocale(LC_ALL, "Russian");
	
	char a[100];
	
	cout << "Введите 3 предложение: ";
	cin.getline(a, 100);
	
	ofstream fout("pr10_3.txt");
	fout << a;
	fout.close();
	
	int n = strlen(a);
	
	ofstream fout1("pr10_4.txt");
	for (int i = n; i >= 0; i--)
	{
		fout1 << a[i] ;
	}
	fout1.close();
	system("pause");
	return 0;	
}
