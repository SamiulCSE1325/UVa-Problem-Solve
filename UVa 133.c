#include <stdio.h>
int main() {
	int n, k, m, flag1, flag2, flag, a, b, c, d, i ,j;
	int s[25];
	while (scanf("%d%d%d", &n, &k, &m) && (n || k || m)) {
		if (n == 1) {
			printf("  1\n");
			continue;
		}
		for (i = 1; i <= n; i++)
			s[i] = i;
		flag1 = flag2 = flag = 0;
		a = b = c = d = -1;
		i = 0;
		j = n + 1;
		while (flag < n) {
			if (a == -1) {
				flag1++;
				i++;
			}
			if (b == -1) {
				flag2++;
				j--;
			}
			if (i > n)
				i = 1;
			if (j < 1)
				j = n;
			if (s[i] == -1)
				flag1--;
			if (s[j] == -1)
				flag2--;
			if(flag1 == k && a == -1) {
				a = s[i];
				c = i;
				flag1 = 0;
			}
			if (flag2 == m && b == -1) {
				b = s[j];
				d = j;
				flag2 = 0;
			}
			if (a != -1 && b != -1) {
				if (a != b) {
					printf("%3d%3d", a, b);
					flag += 2;
					if (flag != n)
						printf(",");
				}
				else {
					printf("%3d", b);
					flag++;
					if (flag != n)
						printf(",");
				}
				s[c] = s[d] = -1;
				a = b = c = d = -1;
			}
		}
		printf("\n");
	}
	return 0;
}
