#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	
	setlocale(LC_ALL, "Russian");
	
	char a[100];
	
	ofstream fout("pr10_1.txt");
	fout << "Hello, world!";
	fout.close();
	
	ifstream fout1("pr10_2.txt");
	fout1.getline(a, 100);
	fout1.close();
	
	cout << a << endl;	
	
	system("pause");
	return 0;	
}
