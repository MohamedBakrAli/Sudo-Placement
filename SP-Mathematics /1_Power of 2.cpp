#include <iostream>
using namespace std;

int main() {
	int t;
	long long int n;
	cin >> t;
	while(t --)
	{
	    cin >> n;
        int res = (n & (n - 1));
        if (res == 0)
            cout << "YES\n";
        else 
            cout << "No\n";
	}
	return 0;
}
