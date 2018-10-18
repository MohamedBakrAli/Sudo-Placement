#include <stdio.h>

int check_sqr(int num){
    int i;
    for (i = 0; i <= num; i++){
        if ((i * i) == num)
            return 1;
    }
    return 0;
}
int main() {
	int T, num;
	scanf("%d", &T);
	while(T --){
	    scanf("%d", &num);
	    printf("%d\n", check_sqr(num));
	}
	return 0;
}
