#include <iostream>
#include <stdio.h>
using namespace std;

int value(char c)
{
    if (c >= '0' && c <= '9') { return c - '0';      }
    if (c >= 'a' && c <= 'f') { return c - 'a' + 10; }
    if (c >= 'A' && c <= 'F') { return c - 'A' + 10; }
    return -1;
}
char conver_hex(int digit)
{
  char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
  if (digit < 10)
    return digits[digit];
  return 'A' + (digit - 10);
}
/*
// function to get the XOR Encryption by Shifting Plaintext
string str_xor (string s1, string s2)
{
  string result = "";
  for (int i =0; s1[i] != '\0'; i++){
    result += conver_hex(value(s1[i]) ^ value(s2[i]));
  }
  return result;
}*/
int main() {
  int t;
  string password;
  cin >> t;
  while (t --) {
    cin >> password;
    int len = password.length();
    string result = "";
    char x = '0';
    char y;
    for (int i = 0; i <= int(len / 2); i++){
        y = conver_hex(value(x) ^ value(password[len - 1 - i]));
        x  = conver_hex(value(x) ^ value(y));
        result = y + result;
    }
    cout <<result << endl;
  }
	return 0;
}
