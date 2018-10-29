#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;
// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);
// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
    int x[26] = {0};
    int index;
    for (int i = 0; str1[i] != '\0'; i++){
      index = str1[i] - 'a';
      x[index] ++;
    }
    for (int i = 0; str2[i] != '\0'; i++){
      index = str2[i] - 'a';
      x[index] --;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i ++ ){
      if (x[i] > 0)
        cnt += x[i];
      else
        cnt += (-1 * x[i]);
    }
    return cnt;
}
