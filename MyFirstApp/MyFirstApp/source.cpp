#include <iostream>
#include <cmath>
using namespace std;
void printRoad(int x)
{
	for (size_t i = 0; i < x; i++)
	{
		cout << "*   *" << endl;
		cout << "* | *" << endl;
		cout << "* | *" << endl;
		cout << "*   *" << endl;
	}
}
int main()
{
	cout << "���α׷� ����!" << endl;
	printRoad(7);
	cout << "���α׷� ��" << endl;
	return 0;
}