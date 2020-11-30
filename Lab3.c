#include <stdio.h>

/* Lab programming 3 */
int i, j, x, n = 0, t;
int dom(int a[10]) {
	for (i = 0; i <= 9; i++) {
		x = abs(a[i]);
		j = i;
		for (j; j <= 9; j++) {
			if (abs(a[j]) == x)
				n += 1;
		}
		if (n > 5) {
			printf("%d is dominating!!!", x);
			t = 1;
			break;
		}
		n = 0;
	}
	if (t != 1)
		return(-1);
}
int main(void) {
	int domination[10];
	for (i = 0; i <= 9; i++) {
		printf("a[%d] =", i + 1); 
		scanf_s("%d", &domination[i]);
	}
	dom(domination);
	
}