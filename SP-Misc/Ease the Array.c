#include <stdio.h>

int main() {
	int t,n, i;
	scanf("%d", &t);
	while(t --)
	{
	    scanf("%d", &n);
	    int arr[n];
	    for (i = 0; i < n ; i++)
	        scanf("%d", arr[i]);
	    for (i = 0; i < n-1; i ++)
	    {
	        if (arr[i] == arr[i + 1]){
	            arr[i] *= 2;
	            arr[i + 1] = 0; 
	        }
	    }
	    int z_cnt = 0;
	    for (i = 0; i < n; i++)
	    {
	        if (arr[i])
	            printf("%d ", arr[i]);
	        else 
	            z_cnt++;
	    }
	    for (i = 0; i < z_cnt; i++)
	    {
	        printf("0 ");
	    }
	    printf("\n");
	}
	return 0;
}
