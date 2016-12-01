#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
	
	setlocale(LC_ALL, "Russian");
	
	int k = 0;
	char a[100];
	
	ifstream fout("pr10_6.txt");
	fout >> a;
	fout.close();
	
	int n = strlen(a);
	
	for (int i = 0; i <= n; i++)
	{
		if (a[i] == '1')
			cout << "Один\n";
		if (a[i] == '2')
			cout << "Два\n";
		if (a[i] == '3')
			cout << "Три\n";
		if (a[i] == '4')
			cout << "Четыре\n";
		if (a[i] == '5')
			cout << "Пять\n";
		if (a[i] == '6')
			cout << "Шесть\n";
		if (a[i] == '7')
			cout << "Семь\n";
		if (a[i] == '8')
			cout << "Восемь\n";
		if (a[i] == '9')
			cout << "Девять\n";
	}
	
	system("pause");
	return 0;	
}
