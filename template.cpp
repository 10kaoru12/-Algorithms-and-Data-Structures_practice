//
// Created by 石澤芳瑠 on 2018-12-26.
// Templete No.1
//
//挿入ソート
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
	}
	array[j + 1] = tmp;
}
//バブルソート
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