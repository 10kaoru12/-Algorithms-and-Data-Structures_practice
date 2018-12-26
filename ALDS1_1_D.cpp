#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int r[200000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> r[i];
	int maxim = -2000000000;
	int minim = r[0];
	for (int i = 1; i < n; i++) {
		maxim = max(maxim, r[i] - minim);
		minim=min(minim,r[i]);
	}
	cout<<maxim<<endl;

	return 0;

}