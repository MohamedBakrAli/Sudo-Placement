{
#include<iostream>
#include<stack>
using namespace std;
void push(int a);
bool isFull(int n);
bool isEmpty();
int pop();
int getMin();
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty()){
		    pop();
		}
		while(!isFull(n)){
			cin>>a;
			push(a);
		}
		cout<<getMin()<<endl;
	}
}
}
int min_elem;
/*Complete the function(s) below*/
void push(int a)
{
  if (s.empty()){
      min_elem = a;
      s.push(a);
      return;
  }    
  if (a  < min_elem){
      s.push(2 * a - min_elem);
      min_elem = a;
  }
  else {
    s.push(a);
  }
  return;
}
bool isFull(int n)
{
  if (s.size() == n)
      return true;
  return false;
}
bool isEmpty()
{
  return s.empty();
}
int pop()
{
   int elem = s.top();
   int temp = elem;
   s.pop();
   if (elem < min_elem){
      temp = min_elem;
      min_elem = 2 * min_elem - elem;
   }
   return temp;
}
int getMin()
{
  return min_elem;
}