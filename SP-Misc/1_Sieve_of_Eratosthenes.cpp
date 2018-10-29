#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main() {
	int T, n;
	scanf("%d", &T);
	while (T--){
	   scanf("%d", &n);
	   bool prime[n+1];
	   memset(prime, true, sizeof(prime)); 
	    for (int p = 2; p*p <= n; p ++){
	         // If prime[p] is not changed, then it is a prime 
		    
	    if (prime[p] == true) 
	    { 
		// Update all multiples of p 
		for (int i=p*2; i<=n; i += p) 
		    prime[i] = false; 
	    } 
	    }
	   for (int p=2; p<=n; p++) 
            if (prime[p]) 
                    printf("%d ", p);
        printf("\n");
	}
	return 0;
}
