#include <iostream>
#include <string>
using namespace std;

void testFunc()
{
	static int runCount = 0;
	cout << "�� �Լ��� " << ++runCount << "�� �����߽��ϴ�." << endl;
}

int main()
{
	testFunc();
	testFunc();
}