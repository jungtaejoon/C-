#include <iostream>
#include <cmath>
using namespace std;
bool isPositive(double x)
{
	return x > 0;
}
int main()
{
	cout << "���α׷� ����!" << endl;
	cout << boolalpha << isPositive(2.3) << endl;
	cout << "���α׷� ��" << endl;
	return 0;
}