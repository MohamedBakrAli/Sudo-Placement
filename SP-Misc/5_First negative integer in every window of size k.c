#include <stdio.h>
int main() {
	int t, i, j;
	scanf("%d", &t);
	while(t--){
	    int n, k;
	    scanf("%d", &n);
	    int arr[n];
	    for (i = 0; i < n; i++){
	        scanf("%d", &arr[i]);
	    }
	    scanf("%d", &k);
	  	for (i = 0; i < (n-k+1); i ++){
				int flag = 1;
				for (j = 0; j < k; j++){
					if (arr[i+j] < 0){
						printf("%d ", arr[j + i]);
						flag = 0;
						break;
					}
				}
				if (flag)
					printf("0 ");
			}
			printf("\n");
	}
	return 0;
}
