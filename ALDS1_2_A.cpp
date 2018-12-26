//
// Created by 石澤芳瑠 on 2018-12-26.
//
#include <iostream>

using namespace std;

int bsort(int n, int array[]) {
	bool flag = 1;
	int tmp=0;
	int cnt=0;
	for (int i = 0; flag; i++) {
		flag = 0;
		for (int j = n - 1; j >= i + 1; j--) {
			if (array[j] < array[j - 1]) {
				swap(array[j], array[j - 1]);
				flag = 1;
				cnt++;
			}
		}
	}
	return cnt;
}

int main(void) {
	int n;
	int swap;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)cin >> a[i];
	swap=bsort(n, a);
	for (int i = 0; i < n; i++)cout << a[i];
	cout << endl;
	cout << swap << endl;
	return 0;
}