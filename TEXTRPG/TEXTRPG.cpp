// TEXTRPG.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;

enum MAIN_MANU {
	MM_QUIT,
	MM_MAP,
	MM_INVENTORY,
	MM_STATUS,
	MM_QUEST,
	
};

int main()
{
	int a;
	system("cls");


	while (1) {
		
		cout << "1.�� 2.�κ��丮 3.�������ͽ� 4.����Ʈ 0.����" << endl;
		cin >> a;
		
		if (a == MM_QUIT)
			break;

		switch (a) {
			case MM_MAP:
				cout << "��" << endl;
				break;
			case MM_INVENTORY:
				cout << "�κ��丮" << endl;
				break;
			case MM_STATUS:
				cout << "�������ͽ�" << endl;
				break;
			case MM_QUEST:
				cout << "����Ʈ" << endl;
				break;
			default:
				cout << "�߸� �Է��ϼ̽��ϴ�" << endl;
		}
	}
	cout << "���� ����" << endl;
	return 0;
}

