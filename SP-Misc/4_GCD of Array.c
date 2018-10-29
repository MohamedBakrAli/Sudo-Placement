#include <stdio.h>
int GCD(int num1, int num2);
int arr_GCD(int arr[], int length);

int main() {
	int t;
	scanf("%d", &t);
	while (t--){
	    int n, i;
	    scanf("%d", &n);
	    int arr[n];
	    for (i = 0; i < n; i++){
	        scanf("%d", &arr[i]);
	    }
	    printf("%d\n", arr_GCD(arr, n));
	}
	return 0;
}
int arr_GCD(int arr[], int length){
    int result = arr[0];
    int i;
    for (i = 1; i < length; i++){
        result = GCD(result, arr[i]);
    }
    return result;
}
int GCD(int num1, int num2){
    if (num1 == 0)
        return num2;
    if (num2 > num1)
        return GCD(num2 % num1, num1);
    else
        return GCD(num1 % num2, num2);
}
