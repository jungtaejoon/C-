#include <iostream>
using namespace std;
bool absEqual(int a, int b)
{
	if (a < 0)
	{
		a = -a;
	}
	if (b < 0)
	{
		b = -b;
	}
	return a == b;
}
int main()
{
	cout << "���α׷� ����!" << endl;
	cout << boolalpha << absEqual(2, -3) << endl;
	cout << "���α׷� ��" << endl;
	return 0;
}