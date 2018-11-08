#include <stdio.h>

int main() {
	int t, n;
	scanf("%d", &t);
	while (t --)
	{
	  scanf("%d", &n);
	  unsigned int count = 0; 
      while (n) 
      { 
        count += n & 1; 
        n >>= 1; 
      }
      printf("%d\n", count);
	}
	return 0;
}
