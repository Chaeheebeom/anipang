// TEXTRPG.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
		
		cout << "1.맵 2.인벤토리 3.스테이터스 4.퀘스트 0.종료" << endl;
		cin >> a;
		
		if (a == MM_QUIT)
			break;

		switch (a) {
			case MM_MAP:
				cout << "맵" << endl;
				break;
			case MM_INVENTORY:
				cout << "인벤토리" << endl;
				break;
			case MM_STATUS:
				cout << "스테이터스" << endl;
				break;
			case MM_QUEST:
				cout << "퀘스트" << endl;
				break;
			default:
				cout << "잘못 입력하셨습니다" << endl;
		}
	}
	cout << "게임 종료" << endl;
	return 0;
}

