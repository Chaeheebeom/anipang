#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;



int mainArr[5][5];
int *ptr[25];
int i,j;
int cnt = 0;


void start() {
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 5;j++) {
			int randomN = rand() % 4 + 1;//1~4����
			mainArr[i][j] = randomN;
		}
	}
}

void print() {
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 5;j++) {
			cout << mainArr[i][j]<<"\t";
		}
		cout << endl;
	}
}
//������ : ���ڸ������ �ۿ� �ִ����� �ȵ�
void search(int i,int j) {
	int col, row;
	
	int number=mainArr[i][j];
	*(ptr + cnt) = &mainArr[i][j];
	cnt++;

	if (i == 0)
		col = i;
	else
		col = i-1;

	for (col;col <= i + 1;col++) {
		
		if (col == i)
			continue;
		if (number == mainArr[col][j]) {
			*(ptr + cnt) = &mainArr[col][j];
			cnt++;
		}
	}

	if (j == 0)
		row = j;
	else
		row = j - 1;

	
	for (row;row <= j + 1;row++) {
		if (row == j)
			continue;
		if (number == mainArr[i][row]) {
			*(ptr+cnt)=&mainArr[i][row];
			cnt++;
		}
	}
}

void checkArr(int i, int j) {
	for (int a = j;a >= 0;a--) {
		if (0 != mainArr[a][i]) {
			mainArr[j][i] = mainArr[a][i];
			mainArr[a][i] = 0;
			j--;
		}
	}
}

void deleteArr() {
	for (int i = 0;i < cnt;i++) {
		*ptr[i] = 0;
	}
	cnt = 0;

	for (int i = 0;i < 5;i++) {
		for (int j = 4;j >= 0;j--) {
			if (0 == mainArr[j][i]) {
				checkArr(i, j);
				break;
			}
		}
	}
}


int main() {
	cout << "�ִ��ν���!!" << endl;
	start();
	print();

	while (1) {
		cout << "��𴩸�����?" << endl;
		cin >> i >> j;
		search(i-1,j-1);
		cout << cnt << endl;
		if(cnt>=3)
			deleteArr();
		else {
			cnt = 0;
		}
		print();
	}
}

//������ �� ��  1.���ڻ� �ƴ϶� �� ���� �͵� ���������ϰ��ϴ°�
//���� üũ�ؼ� ���ӵǴ� ���� ������ ���� �������ִ� ��