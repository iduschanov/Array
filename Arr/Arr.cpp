#include "pch.h"
#include <iostream>

using namespace std;

int Array_1() {

	int A[5] = { 9, 8, 3, 1, 2 }, B[10] = { 5, 3, 0, 4, 2, 8, 1, 6, 9, 7 };
	int flag;
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 10; k++) {
			if (A[i] == B[k]) {
				flag = A[i];
				cout << A[i] << endl;
			}
		}
	}
	return flag;
}

int main()
{
	Array_1();

	system("pause");
	return 0;
}