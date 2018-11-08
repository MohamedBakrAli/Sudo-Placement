#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int l, q;
	    cin>>l>>q;
	    char s[l];
	    cin>>s;
	    long offset=0;
	    
	    while(q--){
	        int ch;
	        cin>>ch;
	        
	        if(ch==1){
	            long k;
	            cin>>k;
	            offset += k;
	            offset = offset%l;
	        }
	        else{
	            long i;
	            cin>>i;
	            cout<< s[(l+i-offset)%l] <<endl;
	        }
	    }
	}
	return 0;
}
