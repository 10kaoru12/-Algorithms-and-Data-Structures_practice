//
// Created by 石澤芳瑠 on 2018-12-26.
//
#include <iostream>
#include <algorithm>

using namespace std;

void isort(int n, int array[]) {
	int tmp;
	int j;
	for (int i = 1; i < n; i++) {
		tmp = array[i];
		j = i - 1;
		while (j >= 0 && array[j] > tmp) {
			array[j + 1] = array[j];
			--j;
		}
		array[j + 1] = tmp;
	}
}

int main(void) {
		int n;
		int v;
		int j;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)cin >> a[i];
		isort(n, a);
		for (int i = 0; i < n; i++)cout << a[i];
		cout << "\n";
		return 0;
}

void isort(aaa){
}