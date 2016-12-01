#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
	
	setlocale(LC_ALL, "Russian");
	
	int k = 0;
	char a[100];
	
	ifstream fout("pr10_5.txt");
	fout >> a;
	fout.close();
	
	int n = strlen(a);
	
	for (int i = 0; i <= n; i++)
	{
		if (a[i]%3 == 0)
			k++;	
	}
	
	cout << k << endl;
	
	system("pause");
	return 0;	
}
