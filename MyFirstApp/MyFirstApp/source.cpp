#include <iostream>
using namespace std;
enum Food
{
	Fish,
	Bread,
	Apple,
	Orange
};

int main()
{
	Food food = Bread;
	switch (food)
	{
	case Fish:
		cout << "���� ���ִ� ����Ⱑ �ֽ��ϴ�." << endl;
		break;
	case Bread:
		cout << "�ȳ�! ���� ��������." << endl;
		break;
	case Apple:
		cout << "��. ������ �����ϴ�." << endl;
		break;
	case Orange:
		cout << "������ ����� ���� �ٳ������ �� �� �ؼ� ��ڰ���." << endl;
		break;
	default:
		cout << "������ �����ϴ�." << endl;
		break;
	}
}