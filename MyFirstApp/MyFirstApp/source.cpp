#include <iostream>
using namespace std;
enum Mount
{
	Horse = 1,
	Mare,
	Mule,
	Sheep,
	Chocobo
};

int main()
{
	int mount;
	cout << "1~5�� Ż���� �������ּ���." << endl;
	cin >> mount;
	switch (mount)
	{
	case Horse:
		cout << "�� ���� ��ͽ����� ���մϴ�." << endl;
		break;
	case Mare:
		cout << "�� �ϸ��� �Ͼ� ���̰� ���޴ϴ�." << endl;
		break;
	case Mule:
		cout << "����� ����� Ÿ�� �Ǿ����ϴ�. ����� �̿� �г��մϴ�." << endl;
		break;
	case Sheep:
		cout << "�޿�! ���� ����� Ÿ�� �ٴϱ� ���� ����� ���Դϴ�." << endl;
		break;
	case Chocobo:
		cout << "���ں�!" << endl;
		break;
	default:
		cout << "Invalid mount" << endl;
		break;
	}
}