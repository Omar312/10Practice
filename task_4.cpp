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
			cout << "����\n";
		if (a[i] == '2')
			cout << "���\n";
		if (a[i] == '3')
			cout << "���\n";
		if (a[i] == '4')
			cout << "������\n";
		if (a[i] == '5')
			cout << "����\n";
		if (a[i] == '6')
			cout << "�����\n";
		if (a[i] == '7')
			cout << "����\n";
		if (a[i] == '8')
			cout << "������\n";
		if (a[i] == '9')
			cout << "������\n";
	}
	
	system("pause");
	return 0;	
}
