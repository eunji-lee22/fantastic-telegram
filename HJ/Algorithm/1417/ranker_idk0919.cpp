#include <cstdio>
int main() {
	int n, arr[1001];
	int cnt = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
		scanf("%d", &arr[i]);
	while (1) {
		int index = 1;
		int maxV = arr[1];
		for (int i = 2; i <= n; ++i) {
			if (maxV <= arr[i]) {
				maxV = arr[i];
				index = i;
			}
		}
		if (index == 1)	break;
		++cnt;
		--arr[index];
		++arr[1];
	}
	printf("%d", cnt);
}